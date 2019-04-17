/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:19:51 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/17 22:27:14 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*istr;

	i = 0;
	istr = ft_memalloc(ft_strlen(s + 1));
	while (s[i])
	{
		istr[i] = f(s[i]);
		i++;
	}
	istr[i] = '\0';
	return (istr);
}
