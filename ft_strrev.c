/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 17:44:38 by sxhondo           #+#    #+#             */
/*   Updated: 2019/04/25 20:07:51 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
		int		i;
		char	ch;
		int		j;

		i = ft_strlen(str) - 1;
		j = 0;
		while (i > j)
		{
			ch = str[i];
			str[i] = str[j];
			str[j] = ch;
			i--;
			j++;
		}
		return (str);
}
