/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 21:49:05 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/24 20:40:22 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*istr;

	if (!(istr = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
    ft_strcat(istr, s1);
    ft_strcat(istr, s2);
	return (istr);
}