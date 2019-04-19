/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:17:21 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/19 17:22:23 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char    *ft_strtrim(char const *s)
{
    char    *istr;
    int     i;
    int     j;
    int     k;
    int     cntr1;
    int     cntr2;


    i = 0;
    cntr1 = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
    {
        i++;
        cntr1++;
    }

    j = ft_strlen(s) - 1;
    cntr2 = 0;
    while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
    {
        j--;
        cntr2++;
    }

    istr = ft_memalloc(ft_strlen(s) - cntr1 - cntr2 + 2);
    if (istr == NULL)
        return (NULL);

    k = 0;
    while (k < j - i + 1)
    {
        istr[k] = s[i + k];
        k++;
    }
    istr[k] = '\0';
    return (istr);
}
//
//int     main()
//{
//    printf("%s", ft_strtrim("      "));
//}
