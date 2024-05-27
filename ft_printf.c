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
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		nprint;

	nprint = 0;
	va_start(ap, str);
	while (str[nprint])
	{
		if (str[nprint] == '%')
            format_code(&str[++nprint], ap);
		else if (str[nprint] != '%')
            ft_putchar_fd(str[nprint], FD);
		nprint++;
	}
	va_end(ap);
	return (nprint--);
}


int main ()
{
	int a = 12;
	int n1 = ft_printf("1-function : %d et %p\n", a, (void*)&a);
	int n2 = printf("2-function : %d et %p\n", a, (void*)&a);
	printf("1-number print %d\n", n1);
	printf("2-number print %d\n", n2);
	return (0);
}
