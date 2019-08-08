/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:18:51 by sxhondo           #+#    #+#             */
/*   Updated: 2019/05/04 13:50:41 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char		*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int 		main()
{
	char	*str = ft_memchr("ohmygod", 'm', 3);
	printf("%s\n", str);

}
