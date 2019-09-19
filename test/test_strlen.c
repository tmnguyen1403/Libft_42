#include "../srcs/libft.h"

void	test(char *s)
{
	printf("system: %lu\n", strlen(s));
	printf("custom: %lu\n", ft_strlen(s));
}

int	main(void)
{
	printf("Test1:\n");
	test("");
	printf("Test2:\n");
	test("a");
	printf("Test3:\n");
	test("abc");
	printf("Test4:\n");
	test("abd  0");
	return (1);
}
