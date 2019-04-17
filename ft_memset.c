/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:19:24 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/17 16:15:12 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	if (str == NULL)
		return (0);
	while (len > 0)
	{
		str[len - 1] = c;
		len--;
	}
	return (str);
}
