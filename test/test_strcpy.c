#include "../srcs/libft.h"

void	test(char *s)
{
	char *d1 = malloc(strlen(s) + 1);
	char *d2 = malloc(strlen(s) + 1);

	printf("system: %s\n", strcpy(d1, s));
	printf("custom: %s\n", ft_strcpy(d2, s));
	free(d1);
	free(d2);
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
	printf("Test6 with \\0:\n");
	test("\0");
	return (1);
}
