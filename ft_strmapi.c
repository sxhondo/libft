/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:17:28 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/23 17:55:03 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*istr;
	char	*estr;

	i = 0;
	estr = (char *)s;
	istr = ft_memalloc(ft_strlen(s + 1));
	if (!istr)
		return (NULL);
	while (s[i])
	{
		istr[i] = f(i, estr[i]);
		i++;
	}
	istr[i] = '\0';
	return (istr);
}
