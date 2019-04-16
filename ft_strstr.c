/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:21:43 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/16 21:49:33 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
//    int     i;
//    int     j;
//
//    i = 0;
//    j = 0;
//
//    while ((char)haystack[i])
//    {
//        while (haystack[i] == needle[j])
//        {
//            j++;
//            return (haystack[i]);
//        }
//        i++;
//    }
//    return (haystack)


    if (needle == NULL)
        return ((char *)haystack);
    while (*haystack)
    {
        while (*needle == *haystack)
            return ((char *)haystack);
        haystack++;
    }
    return (NULL);
}
//
//int     main()
//{
//    const char *large = "lorem ipsum dolor sit amet";
//    const char *small = "ipsuSKLRGKDVD";
//    char *ptr = ft_strstr(large, small);
//    printf("%s", ptr);
//}
