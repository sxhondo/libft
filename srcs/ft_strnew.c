/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:38:04 by sxhondo           #+#    #+#             */
/*   Updated: 2019/08/14 13:15:07 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{	/*
	 * return ((char *)malloc(sizeof(char) * (size + 1))); 
	 * */
	return (char *)ft_memalloc(size + 1);
}
