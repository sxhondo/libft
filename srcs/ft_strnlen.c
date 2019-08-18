/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:38:42 by sxhondo           #+#    #+#             */
/*   Updated: 2019/08/18 14:39:03 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strnlen(const char *str, size_t maxlen)
{
	size_t		len;

	len = 0;
	while (len < maxlen)
	{
		if (!*str)
			break ;
		str++;
		len++;
	}
	return (len);
}
