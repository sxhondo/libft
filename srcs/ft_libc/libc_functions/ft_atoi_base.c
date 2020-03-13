/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 13:01:57 by sxhondo           #+#    #+#             */
/*   Updated: 2020/03/03 13:01:58 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int					ft_atoi_base(const char *str)
// {
// 	unsigned long	nb;
// 	int				sign;
// 	size_t			i;

// 	sign = 1;
// 	nb = 0;
// 	i = 0;
// 	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
// 		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\t')
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 		sign = (str[i++] == '-') ? -1 : 1;
// 	while (str[i])
// 	{
// 		if (str[i] < '0' || str[i] > '9')
// 			break ;
// 		nb = nb * 10 + (str[i++] - '0');
// 	}
// 	return ((int)(nb * sign));
// }
