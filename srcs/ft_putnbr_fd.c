#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char *result;

	if (fd < 0)
		return ;
	result = ft_itoa(n);
	ft_putstr_fd(result, fd);
}
