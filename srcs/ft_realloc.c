/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:04:21 by sxhondo           #+#    #+#             */
/*   Updated: 2019/07/15 12:05:13 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *ptr, size_t newsize)
{
	char	*str;
	char	*new;

	if (ptr && newsize == 0)
	{
		free(ptr);
		return (NULL);
	}
	str = (char *)ptr;
	if (!(new = ft_strnew(newsize)))
		return (NULL);
	ft_strncpy(new, str, newsize);
	free(str);
	return (new);
}
