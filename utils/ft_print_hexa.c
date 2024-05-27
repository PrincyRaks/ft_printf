/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:02:50 by rrakotos          #+#    #+#             */
/*   Updated: 2024/05/27 12:02:52 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"

void    ft_print_hexa(long l, char format_hexa)
{
    if (format_hexa == 'p')
        ft_putstr_fd("0x");
    if (format_hexa == 'p' || format_hexa == 'x')
        ft_putnbr_base(l, "0123456789abcdef");
    else if (format_hexa == 'X')
        ft_putnbr_base(l, "0123456789ABCDEF");
}

