#include "../srcs/libft.h"

int main(void)
{
	printf("System: %d\n", tolower('a'));
	printf("Custom: %d\n", ft_tolower('a'));
	printf("System: %d\n", tolower('A'));
	printf("Custom: %d\n", ft_tolower('A'));
	printf("System: %d\n", tolower('z'));
	printf("Custom: %d\n", ft_tolower('z'));
	printf("System: %d\n", tolower('Z'));
	printf("Custom: %d\n", ft_tolower('Z'));
	printf("System: %d\n", tolower(' '));
	printf("Custom: %d\n", ft_tolower(' '));
	printf("System: %d\n", tolower(127));
	printf("Custom: %d\n", ft_tolower(127));
}
