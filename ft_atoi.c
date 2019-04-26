/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:05:14 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/26 17:22:54 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
        size_t      	i;
        unsigned long	nb;
        unsigned long	border;
        int 			sign;

        sign = 1;
        nb = 0;
        i = 0;
        border = (unsigned long)(FT_LONG_MAX/10);
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
                || str[i] == '\f' || str[i] == '\r' || str[i] == '\t')
            i++;
        if (str[i] == '-' || str[i] == '+')
            sign = (str[i++] == '-') ? -1 : 1;
        while (str[i])
        {
            if (str[i] < '0' || str[i] > '9')
                break ;
            if (nb > border && sign == 1)
                return (-1);
            else if ((nb > border && sign == -1))
                return (0);
            nb = nb * 10 + (str[i] - '0');
            i++;
            if (str[i] < '0' || str[i] > '9')
                break ;
        }
        return ((int)(nb * sign));
}