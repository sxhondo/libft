/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:12:37 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/22 20:04:46 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_itoa(int n)
{
        int     i;
        char    *buf;
        i = 0;
        buf = (char *)malloc(sizeof(char) * 2);
        if (!buf)
            return (NULL);
        n = 0;
        return (buf);
}

//n % 10 + '0'
//n /= 10;
//int     main()
//{
//
//    printf("%s", ft_itoa(42));
//}
