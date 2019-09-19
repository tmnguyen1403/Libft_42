#include "../srcs/libft.h"

int main(void)
{
	printf("System: %d\n", isdigit('a'));
	printf("Custom: %d\n", ft_isdigit('a'));
	printf("System: %d\n", isdigit('1'));
	printf("Custom: %d\n", ft_isdigit('1'));
	printf("System: %d\n", isdigit('0'));
	printf("Custom: %d\n", ft_isdigit('0'));
	printf("System: %d\n", isdigit('9'));
	printf("Custom: %d\n", ft_isdigit('9'));
	printf("System: %d\n", isdigit(' '));
	printf("Custom: %d\n", ft_isdigit(' '));
	printf("System: %d\n", isdigit('\127'));
	printf("Custom: %d\n", ft_isdigit('\127'));
}
