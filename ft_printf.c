/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:20:00 by rrakotos          #+#    #+#             */
/*   Updated: 2024/03/22 11:22:55 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		nprint;
	int		n_format;

	nprint = 0;
	n_format = 0;
	va_start(ap, str);
	while (str[nprint])
	{
		if (str[nprint] == '%')
			n_format += check_flag(&str[++nprint], ap);
		else
			n_format += ft_putchar_fd(str[nprint], FD);
		nprint++;
	}
	va_end(ap);
	return (n_format--);
}

#include <limits.h>
#include <stdio.h>
int main ()
{
	// int a = 65 - 54;
	// char *s;
	// s = "Hello dddd";
	// int n1 = ft_printf("1:%p %d %x %X\n", s, -12000, 254, 546546);
	// int n2 = printf("2:%p %d %x %X\n", s, -12000, 254, 546546);
	// int n1 = ft_printf("1:%-15s\n","Hello");
	// int n2 = printf("2:%-15s\n","Hello");
	// int n1 = ft_printf("%d", 0);
	// int n2 = printf("%d", 0);
	// printf("1-number print %d\n", n1);
	// printf("2-number print %d\n", n2);
	// printf("%+d\n", a);
	// printf("%-d\n", a);
	ft_printf("%-10s\n","Hello");
	return (0);
}
