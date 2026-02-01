/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:47:43 by tzidini           #+#    #+#             */
/*   Updated: 2025/11/10 10:47:44 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	if (!ptr)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	address = (unsigned long)ptr;
	write(1, "0x", 2);
	count = 2;
	count += ft_putnbr_hex(address, 'x');
	return (count);
}
