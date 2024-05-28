
#include "utils.h"
#include <unistd.h>

int	ft_putstr_fd(char *s, int fd)
{
	int	l = (int) ft_strlen(s);
	write (fd, s, (size_t)l);
	return (l);
}
