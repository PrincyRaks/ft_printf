/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:32:58 by rrakotos          #+#    #+#             */
/*   Updated: 2024/05/29 13:33:02 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef FD
#  define FD 1
# endif

# include "./utils/utils.h"

int	ft_printf(const char *str, ...);
int	format_code(const char *str, va_list ap);

#endif
