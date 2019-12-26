/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate_mx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 19:03:58 by sxhondo           #+#    #+#             */
/*   Updated: 2019/12/26 13:24:42 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void				free_prev(int **mx, int i)
{
	while (i)
	{
		free(mx[i]);
		i--;
	}
}

int						**ft_allocate_mx(int x, int y, int fill)
{
	int					i;
	int					**mx;

	if (x <= 0 || y <= 0)
		return (NULL);
	if (!(mx = (int **)malloc(y * sizeof(int *))))
		return (NULL);
	i = 0;
	while (i < x)
	{
		if (!(mx[i] = ft_new_array(y, fill)))
		{
			free_prev(mx, i);
			return (NULL);
		}
		i++;
	}
	return (mx);
}
