/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:41:01 by tzidini           #+#    #+#             */
/*   Updated: 2025/11/10 19:41:08 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_print_char(char c);
int		ft_print_decimal(int n);
int		ft_print_pointer(void *ptr);
int		ft_print_string(char *s);
int		ft_print_unsigned(unsigned int n);
int		ft_putnbr_hex(unsigned long n, char format);
int		ft_printf(const char *format, ...);

size_t	ft_strlen(char const *str);

#endif
