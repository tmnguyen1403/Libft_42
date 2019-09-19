#include "../srcs/libft.h"

char rotate_0(unsigned int i, char c)
{
	return (c + i + 0);
}

char rotate_1(unsigned int i, char c)
{
	return (c + i + 1);
}

int main(void)
{
	char t[5] = "1234";

	printf("Original: %s\n", t);
	printf("Apply rotate_0: %s\n", ft_strmapi(t, rotate_0));
	printf("Apply rotate_1: %s\n", ft_strmapi(t, rotate_1));
	printf("Apply rotate_1 to empty string: %s\n", ft_strmapi("", rotate_1));
	printf("Apply rotate_1 to null string: %s\n", ft_strmapi("\0", rotate_1));
}
