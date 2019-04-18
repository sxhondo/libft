/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 21:49:05 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/18 18:23:34 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*istr;

	j = 0;
	i = 0;
	istr = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1[i])
	{
		istr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		istr[i] = s2[j];
		i++;
		j++;
	}
	return (istr);
}
