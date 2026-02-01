/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:48:21 by tzidini           #+#    #+#             */
/*   Updated: 2025/11/10 10:48:23 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (specifier == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_print_decimal(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (ft_putnbr_hex(va_arg(args, unsigned int), 'x'));
	else if (specifier == 'X')
		return (ft_putnbr_hex(va_arg(args, unsigned int), 'X'));
	else if (specifier == '%')
		return (ft_print_char('%'));
	return (ft_print_char('%') + ft_print_char(specifier));
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	args;

	if (!format || write(1, "", 0) < 0)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++ ;
			if (format[i] == '\0')
				return (va_end(args), -1);
			count += handle_format(format[i], args);
		}
		else
			count += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
