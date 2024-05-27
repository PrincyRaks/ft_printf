/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:05:56 by rrakotos          #+#    #+#             */
/*   Updated: 2024/01/26 14:38:33 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"

int	is_base(char *str)
{
	int	i;
	size_t	size;
	int	j;

	i = 0;
	size = ft_strlen(str);
	if (size == 0 || size == 1)
		return (0);
	while (str[i])
	{
		j = 1;
		if (str[i] == '-' || str[i] == '+')
			return (0);
		while (str[j + i])
		{
			if (str[i] != str[j + i])
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(long l, char *base)
{
	int		n_base;

	n_base = ft_strlen(base);
	if (is_base(base) == 0)
		return ;
	if (l < 0)
	{
		l = -l;
		ft_putchar_fd('-', FD);
	}
	if (l >= n_base)
	{
		ft_putnbr_base(l / n_base, base);
		ft_putnbr_base(l % n_base, base);
	}
	else if (l < n_base)
		ft_putchar_fd(base[l], FD);
}
