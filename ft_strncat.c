/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 19:10:48 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/15 19:26:21 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
    size_t i;
    size_t j;

    i = ft_strlen(dst);
	j = 0;
    if (dst == NULL || src == NULL)
        return (0);
    while (j <= n && src[j])
    {
        dst[i] = src[j];
        j++;
        i++;
    }
    dst[i] = '\0';
    return (dst);
}
