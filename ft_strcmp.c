/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:20:20 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/18 16:55:15 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		n;
	int		ln1;
	int		ln2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	ln1 = ft_strlen(s1);
	ln2 = ft_strlen(s2);
	if (ln1 >= ln2)
		n = ln1;
	else
		n = ln2;
	return (ft_memcmp(s1, s2, n));
}
