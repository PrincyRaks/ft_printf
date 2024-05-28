#ifndef LIBFT_H
# define LIBFT_H

# ifndef FD
#  define FD 1
# endif

# include "./utils/utils.h"

int ft_printf(const char *str, ...);
int format_code(const char *str, va_list ap);

#endif
