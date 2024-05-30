/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_code.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:11:08 by rrakotos          #+#    #+#             */
/*   Updated: 2024/03/22 12:11:18 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdarg.h>
#include <stdio.h>

int	format_code(const char *str, va_list ap)
{
	int	n_format;

	n_format = 0;
	if (*str == 'c')
		n_format = ft_putchar_fd(va_arg(ap, int), FD);
	else if (*str == 's')
		n_format = ft_putstr_fd(va_arg(ap, char *), FD);
	else if (*str == 'p')
		n_format = ft_print_hexa(va_arg(ap, unsigned long), *str);
	else if (*str == 'd' || *str == 'i')
		n_format = ft_putnbr_int(va_arg(ap, int));
	else if (*str == 'u')
		n_format = ft_putnbr_uint(va_arg(ap, unsigned int));
	else if (*str == 'x' || *str == 'X')
		n_format = ft_print_hexa(va_arg(ap, unsigned int), *str);
	else
		n_format = ft_putchar_fd('%', FD);
	return (n_format);
}

int	check_flag(const char *str, va_list ap)
{
	int		to_left;
	char	zero;
	int		n_format;

	n_format = 0;
	zero = ' ';
	to_left = 0;
	if (*str == '-')
	{
		to_left = 1;
		str++;
	}
	if (*str == '0' || *str == '.')
	{
		zero = '0';
		str++;
	}
	else
		n_format += print_witdh_format(str, to_left, zero, ap);
	return (n_format);
}

int	print_witdh_format(const char *str, int is_left, int is_zero, va_list ap)
{
	int	n_width;
	int	n_format;

	n_width = 0;
	n_format = 0;
	if (*str >= '1' && *str <= '9')
	{
		n_width = ft_getwidth_str((char *)str);
		str += count_nbr(n_width);
	}
	if (is_left)
	{
		n_format += format_code(str, ap);
		n_format += ft_putwitdh(n_width, n_format, is_zero);
	}
	// else
	// {
	// 	n_format += ft_putwitdh(n_width, n_format, is_zero);
	// 	n_format += format_code(str, ap);
	// }
	return (n_format);
}

int	count_nbr(int n)
{
	int l;

	l = 0;
	while (n)
	{
		n = n / 10;
		l++;
	}
	return (l);
}