/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:59:17 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/14 21:06:17 by sxhondo          ###   ########.fr       */
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