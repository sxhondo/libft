/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:24:22 by sxhondo           #+#    #+#             */
/*   Updated: 2019/05/04 13:50:41 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	t;
	size_t	j;

	t = 0;
	i = 0;
	if (!s || !(tab = ft_memalloc(sizeof(char *) * (ft_cntwrds(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			if (!(tab[t] = ft_strndup(s + j, i - j)))
				ft_flush_words(tab, i - j);
			t++;
		}
	}
	tab[t] = NULL;
	return (tab);
}
