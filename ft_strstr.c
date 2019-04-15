/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:21:43 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/15 22:24:09 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

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
