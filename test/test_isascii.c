#include "../srcs/libft.h"

int main(void)
{
	printf("System: %d\n", isascii('\0'));
	printf("Custom: %d\n", ft_isascii('\0'));
	printf("System: %d\n", isascii('~'));
	printf("Custom: %d\n", ft_isascii('~'));
	printf("System: %d\n", isascii('a'));
	printf("Custom: %d\n", ft_isascii('a'));
	printf("System: %d\n", isascii('D'));
	printf("Custom: %d\n", ft_isascii('D'));
	printf("System: %d\n", isascii('5'));
	printf("Custom: %d\n", ft_isascii('5'));
	printf("System: %d\n", isascii(' '));
	printf("Custom: %d\n", ft_isascii(' '));
	printf("System: %d\n", isascii('?'));
	printf("Custom: %d\n", ft_isascii('?'));
	printf("System: %d\n", isascii(-1));
	printf("Custom: %d\n", ft_isascii(-1));
	printf("System: %d\n", isascii(128));
	printf("Custom: %d\n", ft_isascii(128));
	printf("System: %d\n", isascii(127));
	printf("Custom: %d\n", ft_isascii(127));

}
