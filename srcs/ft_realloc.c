/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <sxhondo@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:19:56 by sxhondo           #+#    #+#             */
/*   Updated: 2019/07/15 12:20:01 by sxhondo          ###   ########.fr       */
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
