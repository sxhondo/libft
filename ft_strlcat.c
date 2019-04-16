/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:51:29 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/16 20:18:27 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = ft_strlen(dst);
    j = 0;

    while (src[j] && j < size)
    {
        dst[i] = src[j];
        j++;
        i++;
    }
    dst[i] = '\0';
    if (i > size)

    return (i);
}
/*
int     main()
{
    char    out[100];

    ft_strcpy(out, "first");
    ft_strlcat(out, "second", 6);
    printf("%s", out);
} */

