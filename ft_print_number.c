/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtolmaco <dtolmaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:46:14 by dtolmaco          #+#    #+#             */
/*   Updated: 2023/11/18 15:55:32 by dtolmaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	int		temp;
	char	*new;

	new = ft_itoa(n);
	ft_putnbr(n);
	temp = ft_strlen(new);
	free(new);
	return (temp);
}
