/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_module.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:36:49 by sxhondo           #+#    #+#             */
/*   Updated: 2019/09/15 17:36:50 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_printf.h"

void					pf_pcsp(t_fmt *fmt, va_list args, t_vec *buf)
{
	if (*fmt->iter == '%')
		pf_get_percent(fmt, buf);
	else if (*fmt->iter == 'c')
		pf_get_char(fmt, args, buf);
	else if (*fmt->iter == 's')
		pf_get_str(fmt, args, buf);
	else if (*fmt->iter == 'p')
		pf_get_ptr(fmt, args, buf);
	fmt->iter += 1;
}

void					pf_positive_negative_nums(t_fmt *fmt, va_list args,
																	t_vec *buf)
{
	int64_t		num;

	if (fmt->lmodifier & CHAR)
		num = (char)va_arg(args, int);
	else if (fmt->lmodifier & SHORT)
		num = (short)va_arg(args, int);
	else if (fmt->lmodifier & LONG)
		num = va_arg(args, long int);
	else if (fmt->lmodifier & LONG_LONG)
		num = va_arg(args, long long int);
	else
		num = va_arg(args, int);
	pf_get_num(num, fmt, buf, 1);
	fmt->iter += 1;
}

void					pf_positive_nums(t_fmt *fmt, va_list args, t_vec *buf)
{
	uint64_t			num;

	fmt->flags &= ~PLUS;
	fmt->flags &= ~SPACE;
	if (fmt->lmodifier & CHAR)
		num = (unsigned char)va_arg(args, unsigned int);
	else if (fmt->lmodifier & SHORT)
		num = (unsigned short)va_arg(args, unsigned int);
	else if (fmt->lmodifier & LONG)
		num = va_arg(args, unsigned long);
	else if (fmt->lmodifier & LONG_LONG)
		num = va_arg(args, unsigned long long);
	else
		num = va_arg(args, unsigned int);
	pf_get_num(num, fmt, buf, 0);
	fmt->iter += 1;
}

void					pf_floats(t_fmt *fmt, va_list args, t_vec *buf)
{
	long double			dnum;

	if (fmt->lmodifier & LLONG)
		dnum = (long double)va_arg(args, long double);
	else
		dnum = (long double)va_arg(args, double);
	fmt->flags |= (*fmt->iter == 'E' || *fmt->iter == 'G') ? CASE : 0;
	pf_get_dnum(dnum, fmt, buf);
}
