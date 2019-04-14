/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:25:34 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/14 20:57:12 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		h;
	int		n;
	h = 0;
	n = 0;
	if (!*needle && !*haystack)
		return ((char *)haystack);
	while (haystack[h])
	{
		while (haystack[h] == needle[n])
		{
			return ((char *)needle);
			n++;
		}
		h++;
	}
	return (NULL);
}

int		main()
{
	printf("%s", ft_strstr("", "")); 
	return (0);
}
