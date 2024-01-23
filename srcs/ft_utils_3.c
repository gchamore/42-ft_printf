/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:08:18 by gchamore          #+#    #+#             */
/*   Updated: 2024/01/04 11:31:52 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_putnbr(unsigned int nbr)
{
	int	length;

	length = 0;
	if (nbr >= 10)
	{
		length += ft_putnbr(nbr / 10);
		length += ft_putnbr(nbr % 10);
	}
	else
	{
		ft_print_char((nbr + '0'));
		length++;
	}
	return (length);
}

int	ft_print_unsigned(unsigned int n)
{
	int		print_length;

	print_length = 0;
	if (n == 0)
		print_length += write(1, "0", 1);
	else
	{
		print_length += ft_putnbr(n);
	}
	return (print_length);
}
