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
#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

int    format_code(const char *str, va_list ap)
{
    int n_format;

    n_format = 0;
    // printf("ICI %c\n", *str);
    if (*str == 'c')
        n_format = ft_putchar_fd(va_arg(ap, int), FD);
    else if (*str == 's')
        n_format = ft_putstr_fd(va_arg(ap, char*), FD);
    else if (*str == 'p')
        n_format = ft_print_hexa(va_arg(ap, unsigned long), *str);
    else if (*str == 'd')
        n_format = ft_putstr_fd(ft_itoa(va_arg(ap, int)), FD);
    else if (*str == 'i')
        n_format = ft_putstr_fd(ft_itoa(va_arg(ap, int)), FD);
    else if (*str == 'u')
        n_format = ft_putnbr_positive(va_arg(ap, unsigned int));
    else if (*str == 'x' || *str == 'X')
        n_format = ft_print_hexa(va_arg(ap, unsigned int), *str);
    else
        n_format = ft_putchar_fd('%',FD);
    return (n_format);
}