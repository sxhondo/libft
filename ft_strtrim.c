/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:17:21 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/18 18:04:16 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char    *ft_strtrim(char const *s)
{
    int     i;
    int     j;
    int     k;
    int     cntr_out;
    int     cntr_in;
    char    *istr;

    cntr_in = 0;
    cntr_out = 0;
    j = ft_strlen(s) - 1;
    i = 0;

    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
    {
        cntr_in++;
        i++;
    }
    while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
    {
        cntr_out++;
        j--;
    }

    istr = ft_memalloc((ft_strlen(s) - cntr_in) - cntr_out);

    k = 0;
    while (s[i] != ' ' || s[i] != '\n' || s[i] != '\t')
    {
        istr[k] = s[i];
        k++;
        i++;
    }
    istr[k] = '\0';
    printf("%s", istr);
    return (istr);

}

int     main()
{
    ft_strtrim("  hello  ");
}
