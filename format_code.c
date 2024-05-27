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

void    format_code(const char *str, va_list ap)
{
    // printf("ICI %c", *str);
    if (*str == 'c')
        ft_putchar_fd(va_arg(ap, int), FD);
    else if (*str == 's')
        ft_putstr_fd(va_arg(ap, char*), FD);
    // else if (*str == 'p')
    //     ft_print_hexa(va_arg(ap, unsigned long), FD);
    // else if (*str == 'd')
    //     ft_putstr_fd(ft_itoa(va_arg(ap, int)), FD);
    // else if (*str == 'i')
    //     ft_putstr_fd(ft_itoa(va_arg(ap, int)), FD);
    // else if (*str == 'u')
    // else if (*str == 'x' || *str == 'X')
    else
        ft_putchar_fd('%',FD);
}