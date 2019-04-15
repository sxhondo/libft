/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:20:36 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/15 22:24:09 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*istr;

	i = 0;
	while (s1[i])
		i++;
	istr = (char*)malloc(sizeof(*istr) * (i + 1));
	i = 0;
	while (s1[i])
	{
		istr[i] = s1[i];
		i++;
	}
	istr[i] = '\0';
	return (istr);
}
