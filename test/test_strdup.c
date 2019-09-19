#include "../srcs/libft.h"

void	test(char *s)
{
	char *a = strdup(s);
	char *b = ft_strdup(s);
	printf("system: %s\n", a);
	printf("custom: %s\n", b);
	free(a);
	free(b);
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
	printf("Test5 with \\0:\n");
	test("abd  1\0aw");
	return (1);
}
