/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:12:37 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/25 20:18:52 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int nb)
{
	int				len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	char			*tab;
	int				sign;
	int				nblen;

	nb = n;
	nblen = ft_nblen(n);
	if (!(tab = ft_memalloc(sizeof(char) * nblen + 1)))
		return (NULL);
	if (n < 0)
	{
		sign = 1;
		nb = -n;
	}
	tab[nblen--] = '\0';
	while (nblen >= 0)
	{
		tab[nblen] = nb % 10 + '0';
		nb = nb / 10;
		nblen--;
	}
	if (sign == 1)
		tab[0] = '-';
	return (tab);
}
