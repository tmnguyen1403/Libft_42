#include "../srcs/libft.h"

void	test_normal()
{
	printf("Test negative:\n");
	printf("System: %d\n", strncmp("ad", "ad", -1));
	printf("Custom: %d\n", ft_strncmp("ad", "ad", -1));
	printf("Test 0:\n");
	printf("System: %d\n", strncmp("ad", "ad", 0));
	printf("Custom: %d\n", ft_strncmp("ad", "ad", 0));
	printf("Test1:\n");
	printf("System: %d\n", strncmp("", "", 1));
	printf("Custom: %d\n", ft_strncmp("", "", 1));
	printf("\nTest2:\n");
	printf("System: %d\n", strncmp("a", "a", 2));
	printf("Custom: %d\n", ft_strncmp("a", "a", 2));
	printf("\nTest3:\n");
	printf("System: %d\n", strncmp("ab", "ac", 1));
	printf("Custom: %d\n", ft_strncmp("ab", "ac", 1));
	printf("\nTest4:\n");
	printf("System: %d\n", strncmp("abcd", "ab", 2));
	printf("Custom: %d\n", ft_strncmp("abcd", "ab", 2));
	printf("\nTest5:\n");
	printf("System: %d\n", strncmp("abcd", "ab", 3));
	printf("Custom: %d\n", ft_strncmp("abcd", "ab",3));
	printf("\nTest6:\n");
	printf("System: %d\n", strncmp("ap", "ab c", 10));
	printf("Custom: %d\n", ft_strncmp("ad", "ab c", 10));
	printf("\nTest7:\n");
	printf("System: %d\n", strncmp("a\200", "a", 2));
	printf("Custom: %d\n", ft_strncmp("a\200", "a", 2));
	printf("\nTest8:\n");
	printf("System: %d\n", strncmp("a\200\0a", "a\200\0b", 4));
	printf("Custom: %d\n", ft_strncmp("a\200\0a", "a\200\0b", 4));
}

int	main(void)
{
	test_normal();
	return (1);
}
