/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:13:24 by gchamore          #+#    #+#             */
/*   Updated: 2024/01/04 11:27:00 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_print_str(char *str);
int		ft_print_ptr(unsigned long long *str);
void	ft_put_str(char *str);
int		ft_print_nbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hexa(unsigned int num, const char format);
int		ft_print_percent(void);
int		ft_print_char(int c);
int		ft_put_hexa(unsigned int num, const char format);
int		ft_put_ptr(unsigned long ptr);
int		ft_putnbr(unsigned int nbr);

#endif