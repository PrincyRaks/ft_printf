/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:34:14 by rrakotos          #+#    #+#             */
/*   Updated: 2024/05/29 13:34:24 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_print_hexa(unsigned long l, char format_hexa)
{
	int	n_print;

	n_print = 0;
	if (format_hexa == 'p')
	{
		if (l == 0)
		{
			n_print += ft_putstr_fd("(nil)", FD);
			return (n_print);
		}
		n_print += ft_putstr_fd("0x", FD);
		n_print += ft_putnbr_base(l, "0123456789abcdef");
	}
	else if (format_hexa == 'x')
		n_print += ft_putnbr_base(l, "0123456789abcdef");
	else if (format_hexa == 'X')
		n_print += ft_putnbr_base(l, "0123456789ABCDEF");
	return (n_print);
}
