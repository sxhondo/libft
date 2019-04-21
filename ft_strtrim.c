/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:17:21 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/21 19:45:26 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*istr;
	int		i;
	int		j;
	int		k;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s) - 1;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && s[j])
		j--;
	istr = (char *)malloc(sizeof(char) * (j - 1 + 2));
	if (istr == NULL)
		return (NULL);
	k = 0;
	while (k < j - i + 1)
	{
		istr[k] = s[k + i];
		k++;
	}
	istr[k] = '\0';
	return (istr);
}
