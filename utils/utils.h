
#ifndef UTILS_H
# define UTILS_H

# ifndef FD
#  define FD 1
# endif

# include <stddef.h>
# include <stdio.h>

int     ft_putchar_fd(char c, int fd);
int     ft_putstr_fd(char *s, int fd);
size_t  ft_strlen(const char *s);
int     ft_putnbr_base(unsigned long l, char *base);
int     ft_print_hexa(unsigned long l, char format_hexa);
int     ft_putnbr_positive(unsigned int n);
char	*ft_itoa(int n);
size_t	count_nbr(int n);
char	*nbr_str(size_t size, int n, int is_neg);
char	*ft_strdup(const char *s);

#endif
