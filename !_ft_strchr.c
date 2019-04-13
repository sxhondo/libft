/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 21:47:39 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/13 21:58:10 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;	

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		printf("%c", *s[i]);
//		  return ((char *)s[i]);
		i++;	
	}
	return (NULL);
}

int		main()
{
	const char	str[] = "everything";

	printf("%s", ft_strchr(str, 'i'));	
	return (0);
}
