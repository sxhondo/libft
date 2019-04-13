/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 21:32:23 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/13 21:47:33 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *s1, const char *s2)
{
	size_t 	i;
	size_t	n;

	n = 0;
	i = 0;
	while (s1[i])
		i++;
	while (s2[n])
	{
		s1[i] = s2[n];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main()
{
	char	*str_small = "hello";
	char	str_big[100] = "world";

	ft_strcat(str_big, str_small);
//	printf("%s", ft_strcat(str_big, str_small));
}
