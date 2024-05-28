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
#include <stdarg.h>
#include "libft.h"


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
			n_format += format_code(&str[++nprint], ap);
		else
			n_format += ft_putchar_fd(str[nprint], FD);
		nprint++;
	}
	va_end(ap);
	return (n_format--);
}

// #include <limits.h>
// #include <stdio.h>
// int main ()
// {
// 	// int a = 65;
// 	// char *s = "Hello World";
// 	// int n1 = ft_printf("1:%p %d %x %X\n", s, -12000, 254, 546546);
// 	// int n2 = printf("2:%p %d %x %X\n", s, -12000, 254, 546546);
// 	// printf("1-number print %d\n", n1);
// 	// printf("2-number print %d\n", n2);
// 	// printf("%d\n", 4534535434534345);
// 	return (0);
// }
