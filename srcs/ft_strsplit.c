/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:24:22 by sxhondo           #+#    #+#             */
/*   Updated: 2019/08/08 20:13:49 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int 			count_lines(char *s)
{
	int 		i;

	i = 0;
	while (*s++)
	{
		if (ft_isalpha(*s))
		{
			while (ft_isalpha(*s))
				s++;
			i++;
		}
		s++;
	}
	return (i);
}

char			*get_word(const char **s, char *tab)
{
	int 		i;
	char		*str;

	i = 0;
	str = (char *)*s;
	while (ft_isalpha(str[i]))
		i++;
	if (!(tab = ft_strndup(str, i)))
		return (NULL);
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int 	lines;
	int 	j;
	int 	i;

	i = 0;
	j = 0;
	lines = count_lines((char *)s);
	tab = (char **)malloc(sizeof(char *) * lines - 1); //allocating array of pointers (amount of words)
	while (*s)
	{
			while(*s == c)
				s++;
			if (!(tab[j] = get_word(&s, tab[j])))
			{
						while (tab[i])
							free (tab[i++]);
			}
			s += ft_strlen(tab[j]);
			j++;
	}
	return (tab);
}

int			main(int argc, char **argv)
{
	char		**tab;
	char		str[] = "***";
	tab = ft_strsplit(str, '*');
	for (int i = 0; i < count_lines(str); i++)
		printf("%s\n", tab[i]);
	return (0);
}
