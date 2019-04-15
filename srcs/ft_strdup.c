/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:51:26 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/13 20:52:21 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../libft.h"

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
