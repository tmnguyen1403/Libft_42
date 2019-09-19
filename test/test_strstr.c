#include "../srcs/libft.h"

void	test_normal()
{
	char s[100] = "helloef";
	printf("Test1:\n");
	printf("%s\n", strstr(s, "e"));
	printf("%s\n", ft_strstr(s, "e"));
	printf("\nTest1:\n");
	printf("%s\n", strstr(s, ""));
	printf("%s\n", ft_strstr(s, ""));
	printf("\nTest1:\n");
	printf("%s\n", strstr(s, "\0"));
	printf("%s\n", ft_strstr(s, "\0"));
	printf("\nTest1:\n");
	printf("%s\n", strstr(s, "a\0"));
	printf("%s\n", ft_strstr(s, "a\0"));
	printf("\nTest1:\n");
	printf("%s\n", strstr(s, "eff\0"));
	printf("%s\n", ft_strstr(s, "eff\0"));
	printf("\nTest1:\n");
	printf("%s\n", strstr(s, "el\0"));
	printf("%s\n", ft_strstr(s, "el\0"));
	printf("\nTest1:\n");
	printf("%s\n", strstr(s, "ll\0c"));
	printf("%s\n", ft_strstr(s, "ll\0c"));
	printf("\nTest1:\n");
	printf("%s\n", strstr(s, "lo\0c"));
	printf("%s\n", ft_strstr(s, "lo\0c"));
}

int	main(void)
{
	test_normal();
	return (1);
}
