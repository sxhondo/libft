/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 19:12:13 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/13 20:10:10 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*csrc;
	char	*cdest;
	char	tmp[len];

	csrc = (char *)src;
	cdest = (char *)dst;
	i = 0;
	while (i < len)
	{
		tmp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		cdest[i] = tmp[i];
		i++;
	}
	return (cdest);
}
