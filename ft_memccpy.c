/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 18:16:07 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/12 21:04:59 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dst;
	while (i < n)
	{
		cdest[i] = csrc[i];
		if ((unsigned char)csrc[i] == (unsigned char)c)
			return ((char*)cdest + i + 1);
//			return (cdest + i + 1);
		i++;
	}
	return (NULL);
}

int		main()
{
	char	*str1 = "hello";
	char	str2[10];

//	printf("%s", ft_memccpy(str2, str1, 'l', 5));
	ft_memccpy(str2, str1, 'l', 5);
	printf("%s", str2);
}
