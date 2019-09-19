#include "../srcs/libft.h"

void	test_normal()
{
	char s[100] = "helloef";
	printf("Test1:\n");
	printf("%s\n", strnstr(s, "e", 1));
	printf("%s\n", ft_strnstr(s, "e", 1));
	printf("\nTest2:\n");
	printf("%s\n", strnstr(s, "e", 0));
	printf("%s\n", ft_strnstr(s, "e", 0));
	printf("\nTest3:\n");
	printf("%s\n", strnstr(s, "e", -1));
	printf("%s\n", ft_strnstr(s, "e", -1));
	printf("\nTest4:\n");
	printf("%s\n", strnstr(s, "e", 2));
	printf("%s\n", ft_strnstr(s, "e", 2));
	printf("\nTest5:\n");
	printf("%s\n", strnstr(s, "eb", 2));
	printf("%s\n", ft_strnstr(s, "eb", 2));
	printf("\nTest6:\n");
	printf("%s\n", strnstr(s, "lo", 4));
	printf("%s\n", ft_strnstr(s, "lo", 4));
	printf("\nTest7:\n");
	printf("%s\n", strnstr(s, "lo", 10));
	printf("%s\n", ft_strnstr(s, "lo", 10));
	printf("\nTest8:\n");
	printf("%s\n", strnstr(s, "lo", 4));
	printf("%s\n", ft_strnstr(s, "lo", 4));
	printf("\nTest8:\n");
	printf("%s\n", strnstr(s, "lo", 5));
	printf("%s\n", ft_strnstr(s, "lo", 5));
	printf("\nTest special:\n");
	printf("%s\n", strnstr("llef", "ef", 4));
	printf("%s\n", ft_strnstr("llef", "ef", 4));
	printf("\nTest null:\n");
	printf("%s\n", strnstr(s, "", 10));
	printf("%s\n", ft_strnstr(s, "", 10));
	printf("\nTest \\0:\n");
	printf("%s\n", strnstr(s, "\0", 10));
	printf("%s\n", ft_strnstr(s, "\0", 10));
	printf("\nTest \\0:\n");
	printf("%s\n", strnstr(s, "l\0o", 10));
	printf("%s\n", ft_strnstr(s, "l\0o", 10));

}

int	main(void)
{
	test_normal();
	return (1);
}
