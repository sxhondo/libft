/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:28:54 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/15 16:40:34 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (0);
}