#include "../srcs/libft.h"

int main(void)
{
	printf("System: %d\n", isprint('\0'));
	printf("Custom: %d\n", ft_isprint('\0'));
	printf("System: %d\n", isprint(31));
	printf("Custom: %d\n", ft_isprint(31));
	printf("System: %d\n", isprint(32));
	printf("Custom: %d\n", ft_isprint(32));
	printf("System: %d\n", isprint(126));
	printf("Custom: %d\n", ft_isprint(126));
	printf("System: %d\n", isprint(127));
	printf("Custom: %d\n", ft_isprint(127));
}
