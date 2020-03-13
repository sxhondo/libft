/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:52:57 by sxhondo           #+#    #+#             */
/*   Updated: 2020/03/02 16:52:58 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec				*ft_vec_read(int fd)
{
	t_vec			*vec;
	char			buf[1];

	if (!(vec = ft_vec_init(1, sizeof(char))))
		return (NULL);
	while (read(fd, buf, sizeof(buf)) > 0)
		ft_vec_add(&vec, buf);
	ft_vec_add(&vec, "\0");
	if (!(ft_vec_resize(&vec)))
	{
		ft_vec_del(&vec);
		return (NULL);
	}
	return (vec);
}
