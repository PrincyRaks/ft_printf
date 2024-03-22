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
		{
            format_code(&str[nprint]);
            nprint++;
        }
		else if (str[nprint] != '%')
            ft_putchar_fd(str[nprint], FD);
		nprint++;
	}
	return (nprint--);
}


int main ()
{
	// show(3,  "jjj", 45,'c',"lala",15.6);
	// printf("number print: %d\n",printf("Hello :%d\n", a));
	// printf("ggd %");
	int n = ft_printf("hello %d\n",8);
	printf("number of print: %d\n",n);
	return (0);
}
