/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolmaco <dtolmaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:14:22 by dtolmaco          #+#    #+#             */
/*   Updated: 2023/11/18 12:59:19 by dtolmaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static void	ft_put_hex(uintptr_t num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else if (format == 'x')
			ft_putchar(num - 10 + 'a');
		else if (format == 'X')
			ft_putchar(num - 10 + 'A');
	}
}

int	ft_print_hex(const char format, unsigned int args)
{
	int	print_length;

	print_length = 0;
	if (args == 0)
		print_length = print_length + write(1, "0", 1);
	else
	{
		ft_put_hex(args, format);
		print_length = print_length + ft_hex_len(args);
	}
	return (print_length);
}
