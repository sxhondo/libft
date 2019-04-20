/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:51:29 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/20 15:26:02 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    while (dst[i] && j < size)
        i++;
    while (src[j] && (i + j + 1) < size) {
        dst[i + j] = src[j];
        j++;
    }
    if (i != size)
        dst[i + j] = '\0';
    return (i + ft_strlen(src));
}
//
//int     main()
//{
//    char    out[10];
//
//    ft_strlcat(out, "lorem ipsum dolor sit amet", 0);
//    printf("%s", out);
//}

