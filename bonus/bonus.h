/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakotos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:34:15 by rrakotos          #+#    #+#             */
/*   Updated: 2024/05/30 11:34:17 by rrakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# ifndef FD
#  define FD 1
# endif

# include "../utils/utils.h"
# include <stddef.h>
# include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
int		ft_atoi(const char *nptr);
int		ft_putwitdh(unsigned int n_width, int n_format, char is_zero);
int		ft_getwidth_str(char *str);
#endif
