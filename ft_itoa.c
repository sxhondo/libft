/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:12:37 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/26 20:27:06 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
    int				i;
    unsigned int	x;
    int				sign;
    char			*buf;

//    if (!(buf = ft_strnew(ft_nblen(n))))
//        return (NULL);
    buf = ft_strnew(ft_nblen(n));
    x = n;
    if ((sign = n) < 0)
        x = -n;
    i = 0;
    if (x == 0)
        buf[i++] = '0';
    while (x > 0)
    {
        buf[i++] = x % 10 + '0';
        x /= 10;
    }
    if (sign < 0)
        buf[i++] = '-';
    buf[i] = '\0';
    ft_strrev(buf);
    return (buf);
}
