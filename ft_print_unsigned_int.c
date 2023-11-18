/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolmaco <dtolmaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:33:39 by dtolmaco          #+#    #+#             */
/*   Updated: 2023/11/18 16:41:07 by dtolmaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_print_unsigned_int(unsigned int n)
{
	char			*new;
	unsigned int	len;
	unsigned int	temp;

	len = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	len = count_len(n);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (0);
	new[len] = '\0';
	temp = len;
	while (temp > 0)
	{
		new[temp - 1] = n % 10 + '0';
		n = n / 10;
		temp--;
	}
	ft_putstr(new);
	free(new);
	return (len);
}
