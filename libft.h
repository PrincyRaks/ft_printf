/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:20:15 by rrakotos          #+#    #+#             */
/*   Updated: 2024/03/22 12:28:45 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# ifndef FD
#  define FD 1
# endif

# include "ft_utils/utils.h"

int		ft_printf(const char *str, ...);
void	format_code(const char *str);

#endif
