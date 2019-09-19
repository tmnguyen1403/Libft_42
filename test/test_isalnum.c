#include "../srcs/libft.h"

int main(void)
{
	printf("System: %d\n", isalnum('a'));
	printf("Custom: %d\n", ft_isalnum('a'));
	printf("System: %d\n", isalnum('1'));
	printf("Custom: %d\n", ft_isalnum('1'));
	printf("System: %d\n", isalnum('D'));
	printf("Custom: %d\n", ft_isalnum('D'));
	printf("System: %d\n", isalnum('~'));
	printf("Custom: %d\n", ft_isalnum('~'));
	printf("System: %d\n", isalnum('\0'));
	printf("Custom: %d\n", ft_isalnum('\0'));
	printf("System: %d\n", isalnum(''));
	printf("Custom: %d\n", ft_isalnum(''));
}
