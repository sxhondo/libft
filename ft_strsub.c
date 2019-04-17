/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:55:03 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/17 21:46:05 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t     i;
    char    *istr;

    i = 0;

    if (!s)
        return (NULL);
    istr = ft_memalloc(len - start);

    if (start > len)
        return (istr);
    while (i < len)
    {
        istr[i] = s[start + i];
        i++;
    }
    istr[i] = '\0';
    return (istr);
}
//
//int     main()
//{
//    printf("%s", ft_strsub("hello", 7, 0));
//}
