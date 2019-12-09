/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_ptr_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 21:00:54 by sxhondo           #+#    #+#             */
/*   Updated: 2019/12/09 21:00:55 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					**ft_new_ptr_array(int size)
{
	int 				i;
	void				**tab;

	if (!(tab = (void **)malloc(sizeof(void *) * size))
			|| size <= 0)
		return (NULL);
	i = -1;
	while (++i < size)
		tab[i] = NULL;
	return (tab);
}

