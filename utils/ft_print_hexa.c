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

int ft_print_hexa(unsigned long l, char format_hexa)
{
	int	n_print;

	n_print = 0;
    if (format_hexa == 'p')
        n_print += ft_putstr_fd("0x", FD);
    if (format_hexa == 'p' || format_hexa == 'x')
		n_print += ft_putnbr_base(l, "0123456789abcdef");
    else if (format_hexa == 'X')
	{
		n_print += ft_putnbr_base(l, "0123456789ABCDEF");
	}
	return (n_print);
}

