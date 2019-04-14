/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:02:11 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/14 20:16:17 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	
	if (c == 0)
		return ((char *)s + i); 

	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}	
	return (NULL);
}

int		main()
{
	const char	*str = "everything";	

	printf("%s", ft_strrchr(str, 'e'));
	return (0);
}
