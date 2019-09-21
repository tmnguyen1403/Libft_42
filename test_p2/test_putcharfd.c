#include "../srcs/libft.h"

int main(void)
{
	int fd;

	fd = open("fd.txt", O_WRONLY);
	ft_putchar_fd('h', fd);
	ft_putchar_fd('e', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('\0', fd);
	ft_putchar_fd('~', fd);
	close(fd);
	return (1);
}
