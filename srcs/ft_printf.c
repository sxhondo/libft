/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 20:33:13 by sxhondo           #+#    #+#             */
/*   Updated: 2019/09/23 17:22:31 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_printf.h"

static void					print_module(t_fmt *fmt, va_list args, t_vec *buf)
{
	if (*fmt->iter == '%' || *fmt->iter == 'c' || *fmt->iter == 's'
		|| *fmt->iter == 'p')
		pcsp(fmt, args, buf);
	else if (*fmt->iter == 'd' || *fmt->iter == 'i')
		positive_negative_nums(fmt, args, buf);
	else if (*fmt->iter == 'o' || *fmt->iter == 'u' || *fmt->iter == 'x'
			|| *fmt->iter == 'X' || *fmt->iter == 'b')
		positive_nums(fmt, args, buf);
	else if (*fmt->iter == 'f' || *fmt->iter == 'e' || *fmt->iter == 'E')
		floats(fmt, args, buf);
	else if (*fmt->iter == 'r')
		print_non_printable(fmt, args, buf);
}

static void					parse_format_string(t_fmt *fmt, va_list args)
{
	fmt->flags = process_flags(fmt);
	fmt->width = process_width(fmt, args);
	fmt->precision = process_precision(fmt, args);
	fmt->lmodifier = process_lmodifier(fmt);
	fmt->base = process_base(fmt);
}

static int					write_in_buf(t_fmt *fmt, t_vec *buf)
{
	while (*fmt->iter != '%' && *fmt->iter)
	{
		while (*fmt->iter == '{')
		{
			get_color(fmt, buf);
			if (*fmt->iter == '%')
				return (0);
		}
		if ((*fmt->iter))
			ft_vec_add(&buf, (char *)&*fmt->iter++);
	}
	return (0);
}

static int					ft_fprintf(int fd, const char *fmt, va_list args)
{
	t_vec					*buf;
	t_fmt					*format;
	size_t					save;
	size_t					i;

	if (!(buf = ft_vec_init(1, sizeof(char)))
			|| !(format = ft_memalloc(sizeof(t_fmt))))
		return (0);
	format->iter = fmt;
	while (*format->iter)
	{
		write_in_buf(format, buf);
		if (!*format->iter)
			break ;
		parse_format_string(format, args);
		print_module(format, args, buf);
	}
	i = -1;
	save = buf->total;
	while (++i < buf->total)
		write(fd, &buf->data[i], 1);
	ft_vec_del(&buf);
	free(format);
	return (save);
}

int							ft_printf(const char *restrict format, ...)
{
	va_list					args;
	int						done;

	if (!format)
		return (-1);
	va_start(args, format);
	done = ft_fprintf(1, format, args);
	va_end(args);
	return (done);
}
