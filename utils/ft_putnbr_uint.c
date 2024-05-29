/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:43:52 by rrakotos          #+#    #+#             */
/*   Updated: 2024/05/29 13:43:54 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putnbr_uint(unsigned int n)
{
	if (n > 9)
		return (ft_putnbr_uint(n / 10) + ft_putnbr_uint(n % 10));
	else
		return (ft_putchar_fd(n + '0', FD));
}
