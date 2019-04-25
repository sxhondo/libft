/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:24:22 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/25 19:44:40 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_words(const char *str, const char c)
{
	size_t	i;
	int		cntr;

	cntr = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		if (str[i] != c)
		{
			i++;
			cntr++;
		}
	}
	return (cntr);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	t;
	size_t	j;

	t = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(tab = ft_memalloc(sizeof(char *) * (ft_words(s, c) + 1))))
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
			tab[t] = ft_strndup(s + j, i - j);
			if (!tab[t])
				free(tab);
			t++;
		}
	}
	tab[t] = NULL;
	return (tab);
}
