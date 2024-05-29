/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:44:23 by rrakotos          #+#    #+#             */
/*   Updated: 2024/05/29 13:44:27 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>

int	ft_putstr_fd(char *s, int fd)
{
	int	l;

	l = (int)ft_strlen(s);
	if (!s)
	{
		l = 6;
		write(fd, "(null)", l);
	}
	else
		write(fd, s, (size_t)l);
	return (l);
}
