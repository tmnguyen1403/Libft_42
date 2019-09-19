#include "../srcs/libft.h"

void	test_normal()
{
	printf("Test1:\n");
	printf("System: %d\n", strcmp("", ""));
	printf("Custom: %d\n", ft_strcmp("", ""));
	printf("\nTest2:\n");
	printf("System: %d\n", strcmp("a", "a"));
	printf("Custom: %d\n", ft_strcmp("a", "a"));
	printf("\nTest3:\n");
	printf("System: %d\n", strcmp("ab", "ac"));
	printf("Custom: %d\n", ft_strcmp("ab", "ac"));
	printf("\nTest4:\n");
	printf("System: %d\n", strcmp("abcd", "ab"));
	printf("Custom: %d\n", ft_strcmp("abcd", "ab"));
	printf("\nTest5:\n");
	printf("System: %d\n", strcmp("a", "ab"));
	printf("Custom: %d\n", ft_strcmp("a", "ab"));
	printf("\nTest6:\n");
	printf("System: %d\n", strcmp("ap", "ab c"));
	printf("Custom: %d\n", ft_strcmp("ad", "ab c"));
	printf("\nTest7:\n");
	printf("System: %d\n", strcmp("a\200", "a"));
	printf("Custom: %d\n", ft_strcmp("a\200", "a"));
	printf("\nTest8:\n");
	printf("System: %d\n", strcmp("a\200\0a", "a\200\0b"));
	printf("Custom: %d\n", ft_strcmp("a\200\0a", "a\200\0b"));
}

int	main(void)
{
	test_normal();
	return (1);
}
