#include "utils.h"

int	ft_putnbr_positive(unsigned int n)
{
	if (n > 9)
		return (ft_putnbr_positive (n / 10) +
			ft_putnbr_positive(n % 10));
	else
		return (ft_putchar_fd (n + '0', FD));
}
