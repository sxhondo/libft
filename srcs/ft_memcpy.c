/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:36:44 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/13 19:11:43 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dst;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dst);
}
