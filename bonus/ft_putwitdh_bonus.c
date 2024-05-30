/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwitdh_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:40:09 by rrakotos          #+#    #+#             */
/*   Updated: 2024/05/30 11:40:25 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bonus.h"

int	ft_putwitdh(unsigned int n_width, int n_format, char is_zero)
{
	int	rest;

	rest = 0;
	if ((int)n_width > n_format)
		rest = n_width - n_format;
	while ((int)n_width > n_format)
	{
		ft_putchar_fd(is_zero, FD);
		n_width--;
	}
	return (rest);
}

int	ft_getwidth_str(char *str)
{
	char *num_str;
	unsigned int n_width;

	n_width = 0;
	num_str = "";
	while (*str >= '1' && *str <= '9')
	{
		num_str = ft_strjoin(num_str, &(*str));
		str++;
	}
	n_width = ft_atoi(num_str);
	return (n_width);
}