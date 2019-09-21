#include "../srcs/libft.h"

int main(void)
{
	int fd;

	fd = open("fd.txt", O_WRONLY);

	ft_putstr_fd("abcd", fd);
	ft_putstr_fd("\nbac", fd);
	ft_putstr_fd("\n\0abc", fd);
	ft_putstr_fd("\n123\n\04", fd);
	close(fd);
	return (1);
}
