#include "../srcs/libft.h"

int main(void)
{
	printf("System: %d\n", isalpha('a'));
	printf("Custom: %d\n", ft_isalpha('a'));
	printf("System: %d\n", isalpha('A'));
	printf("Custom: %d\n", ft_isalpha('A'));
	printf("System: %d\n", isalpha('y'));
	printf("Custom: %d\n", ft_isalpha('y'));
	printf("System: %d\n", isalpha(' '));
	printf("Custom: %d\n", ft_isalpha(' '));
	printf("System: %d\n", isalpha('\200'));
	printf("Custom: %d\n", ft_isalpha('\200'));
}
