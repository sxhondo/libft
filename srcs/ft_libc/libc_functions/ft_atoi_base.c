/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 13:01:57 by sxhondo           #+#    #+#             */
/*   Updated: 2020/03/03 13:01:58 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			valid_char(char ch, unsigned base)
{
	if (base > 0 && base <= 10 && ch >= '0' && ch <= '9')
		return (1);
	if ((base > 10 && base <= 16) && ((ch >= '0' && ch <= '9')
		|| (ch >= 'A' && ch <= 'F') || (ch >= 'a' && ch <= 'f')))
		return (1);
	return (0);
}

static int			get_sign(const char *str, int *sign, size_t *i)
{
	*sign = 1;
	while (str[*i] && (str[*i] == ' ' || str[*i] == '\n' || str[*i] == '\v'
		|| str[*i] == '\f' || str[*i] == '\r' || str[*i] == '\t'))
		*i += 1;
	if (str[*i])
	{
		if (str[*i] == '-')
		{
			*i += 1;
			*sign = -1;
		}
		else if (str[*i] == '+')
			*i += 1;
		return (1);
	}
	if (ft_strnequ(str, "0x", 2) == 0)
		*i += 2;
	return (0);
}

int					ft_atoi_base(const char *str, int32_t *res, unsigned base)
{
	unsigned long	nb;
	int				sign;
	size_t			i;

	i = 0;
	nb = 0;
	if (!(get_sign(str, &sign, &i)) && (str += i))
		return (0);
	while (*str)
	{
		if (valid_char(*str, base))
		{
			if (*str >= '0' && *str <= '9')
				nb = nb * base + (*str - '0');
			else if (*str >= 'a' && *str <= 'f')
				nb = nb * base + (*str - 'a' + 10);
			else if (*str >= 'A' && *str <= 'F')
				nb = nb * base + (*str - 'A' + 10);
			str += 1;
		}
		return (0);
	}
	*res = (int)(nb * sign);
	return (1);
}
