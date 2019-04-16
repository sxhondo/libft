/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:19:50 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/16 19:34:56 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
    size_t i;
    size_t j;

    i = ft_strlen(dst);
    j = 0;
    while (src[j])
    {
        dst[i] = src[j];
        j++;
        i++;
    }
    dst[i] = '\0';
    return (dst);
}