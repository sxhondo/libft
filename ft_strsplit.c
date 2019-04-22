/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:24:22 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/22 19:13:41 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_words(const char *str, const char c)
{
	int		i;
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
	int		i;
	int		t;
	int		j;

	t = 0;
	i = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (!tab)
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
			t++;
		}
	}
	tab[t] = NULL;
	return (tab);
}
