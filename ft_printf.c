/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolmaco <dtolmaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:14:53 by dtolmaco          #+#    #+#             */
/*   Updated: 2023/11/18 17:20:05 by dtolmaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	conversions(const char format, va_list args)
{
	char	c;
	int		len;

	len = 1;
	if (format == 'd' || format == 'i')
		len = ft_print_number(va_arg(args, int));
	else if (format == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (format == 'c')
	{
		c = va_arg(args, int);
		write(1, &c, 1);
	}
	else if (format == '%')
		write(1, "%%", 1);
	else if (format == 'p')
		len = ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'u')
		len = ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = ft_print_hex(format, va_arg(args, unsigned int));
	else
		write(1, &format, 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		total_len;

	i = 0;
	total_len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]) != 0)
		{
			total_len = total_len + conversions(format[i + 1], args);
			i++;
		}
		else
		{
			total_len++;
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (total_len);
}
// int	main(void)
// {
// 	char	*a;

// 	a = "hello guys";
// 	printf("\n%d\n",ft_printf("digit: %d\n, %c, %s, percent %% ponter:
// 	 %p unsigned int:
// 	 %u hexadecimal lower: %x hexadecimal upper: %X\n", 420, 'h', 
// 	 "nasral", a, 42, 42, 42));
// 	printf("\n%d\n",printf("digit: %d\n, %c, %s, percent 
// 	%% ponter: %p unsigned int: %u
// 	 hexadecimal lower: %x hexadecimal upper: %X\n", 420,'
// 	 h', "nasral", a, 42, 42, 42));
// }
