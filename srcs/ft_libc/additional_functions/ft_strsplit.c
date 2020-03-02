/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:24:22 by sxhondo           #+#    #+#             */
/*   Updated: 2019/08/14 13:27:14 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**free_previous(char **ret, int i)
{
	while (i)
	{
		ft_strdel(&ret[i]);
		i--;
	}
	return (NULL);
}

static size_t	count_words(const char *str, char c)
{
	size_t		w;

	w = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			w += 1;
		while (*str && *str != c)
			str++;
	}
	return (w);
}

static char		*get_word(const char *s, char c)
{
	char		*ret;
	size_t		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (i == 0 || !(ret = ft_strndup(s, i)))
		return (0);
	return (ret);
}

void			ft_strsplit_free(char **tab)
{
	char		**tmp;

	tmp = tab;
	if (tab)
	{
		while (*tab)
		{
			ft_strdel(&(*tab));
			tab++;
		}
		free(tmp);
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char		**ret;
	size_t		i;
	size_t		words;

	ret = NULL;
	if (s && c && (words = count_words(s, c)) > 0)
	{
		if (!(ret = (char **)ft_memalloc(sizeof(char *) * (words + 1))))
			return (NULL);
		i = 0;
		while (*s)
		{
			while (*s && *s == c)
				s++;
			if (!(ret[i] = get_word(s, c)))
				return (free_previous(ret, i));
			s += ft_strlen(ret[i]);
			i++;
		}
		ret[i] = NULL;
	}
	return (ret);
}
