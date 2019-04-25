/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:05:14 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/25 19:24:54 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int	i;
	long long int	nb;
	long			sign;

	sign = 1;
	i = 0;
	nb = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = (str[i++] == '-') ? -1 : 1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		nb = nb * 10 + (str[i] - '0');
		i++;
		if (str[i] < '0' || str[i] > '9')
			break ;
	}
	return (nb * sign);
}
