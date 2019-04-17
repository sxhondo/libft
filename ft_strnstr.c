/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:21:23 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/17 15:12:45 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char    *cp;
    char    *s1;
    char    *s2;
    size_t    i;

    i = 0;
    cp = (char *) haystack;
    while (*cp)
    {
        s1 = cp;
        s2 = (char *) needle;

        while (*s1 && *s2 && !(*s1 - *s2) && (i <= len))
        {
            s1++;
            s2++;
            i++;
        }
        if (!*s2)
            return (cp);
        cp++;
    }
    return (NULL);
}
//
//int     main() {
//    char *ptr;
//
//    ptr = strnstr("lorem ipsum dolor sit amet", "sit", 10);
//    printf("%s", ptr);
//}