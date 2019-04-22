/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:44:27 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/22 20:07:58 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	char	*istr;

	i = ft_strlen(s1);
	istr = (char*)malloc(sizeof(*istr) * n);
	if (!istr)
		return (NULL);
	i = 0;
	while (s1[i] && i < n)
	{
		istr[i] = s1[i];
		i++;
	}
	istr[i] = '\0';
	return (istr);
}
