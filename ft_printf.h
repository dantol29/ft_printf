/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolmaco <dtolmaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:26:27 by dtolmaco          #+#    #+#             */
/*   Updated: 2023/11/18 17:10:16 by dtolmaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_itoa(int n);
void	ft_putchar(char c);
int		ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_print_number(int n);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_unsigned_int(unsigned int n);
int		ft_print_hex(const char format, unsigned int args);

#endif