#include "../srcs/libft.h"

int main(void)
{
	printf("System: %d\n", toupper('a'));
	printf("Custom: %d\n", ft_toupper('a'));
	printf("System: %d\n", toupper('A'));
	printf("Custom: %d\n", ft_toupper('A'));
	printf("System: %d\n", toupper('z'));
	printf("Custom: %d\n", ft_toupper('z'));
	printf("System: %d\n", toupper('Z'));
	printf("Custom: %d\n", ft_toupper('Z'));
	printf("System: %d\n", toupper(' '));
	printf("Custom: %d\n", ft_toupper(' '));
	printf("System: %d\n", toupper(127));
	printf("Custom: %d\n", ft_toupper(127));
}
