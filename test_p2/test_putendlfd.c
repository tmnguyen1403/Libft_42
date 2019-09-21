#include "../srcs/libft.h"

int main(void)
{
	int fd;

	fd = open("fd.txt", O_WRONLY);

	ft_putendl_fd("abcd", fd);
	ft_putendl_fd("bac", fd);
	ft_putendl_fd("abc", fd);
	ft_putendl_fd("123\n\04", fd);
	close(fd);
	return (1);
}
