/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:21:26 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/15 17:33:30 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	
	if (str == NULL)
		return (0);
	while (len > 0)
	{
		str[len] = c;
		len--;			
	}
	return (b);
}
