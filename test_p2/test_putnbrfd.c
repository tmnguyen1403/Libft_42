#include "../srcs/libft.h"

int main(void)
{
	int fd;
	int max;
	int min;

	max = 2147483647;
	min = -2147483648;
	fd = open("fd.txt", O_WRONLY);

	ft_putnbr_fd(0, fd);
	ft_putendl_fd("", fd);
	ft_putnbr_fd(-1, fd);
	ft_putendl_fd("", fd);
	ft_putnbr_fd(1, fd);
	ft_putendl_fd("", fd);
	ft_putnbr_fd(min, fd);
	ft_putendl_fd("", fd);
	ft_putnbr_fd(max, fd);
	ft_putendl_fd("", fd);
	close(fd);
	return (1);
}
