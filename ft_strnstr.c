/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:21:23 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/15 22:24:09 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;
	
	h = 0;
	n = 0;
	if (!*needle && !*haystack)
		return ((char *)haystack);
	while (h < len && haystack[h])
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
