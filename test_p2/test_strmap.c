#include "../srcs/libft.h"

char rotate_0(char c)
{
	return (c);
}

char rotate_1(char c)
{
	return (c + 1);
}

int main(void)
{
	char t[5] = "1234";

	printf("Apply rotate_0: %s\n", ft_strmap(t, rotate_0));
	printf("Apply rotate_1: %s\n", ft_strmap(t, rotate_1));
	printf("Apply rotate_1 to empty string: %s\n", ft_strmap("", rotate_1));
	printf("Apply rotate_1 to null string: %s\n", ft_strmap("\0", rotate_1));
}
