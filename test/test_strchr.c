#include "../srcs/libft.h"

void	test_normal()
{
	char s[100] = "helloef";
	printf("Test1:\n");
	printf("%s\n", strchr(s, 'e'));
	printf("%s\n", ft_strchr(s, 'e'));
	printf("Test2:\n");
	printf("%s\n", strchr(s, 0));
	printf("%s\n", ft_strchr(s, 0));
	printf("Test3:\n");
	printf("%s\n", strchr(s, -2));
	printf("%s\n", ft_strchr(s, -2));
	printf("Test4:\n");
	printf("%s\n", strchr(s, 'h'));
	printf("%s\n", ft_strchr(s, 'h'));
	printf("Test5:\n");
	printf("%s\n", strchr(s, 'f'));
	printf("%s\n", ft_strchr(s, 'f'));
	printf("Test6:\n");
	printf("%s\n", strchr("", 'f'));
	printf("%s\n", ft_strchr("", 'f'));
	printf("Test7:\n");
	printf("%s\n", strchr("", 0));
	printf("%s\n", ft_strchr("", 0));
}

int	main(void)
{
	test_normal();
	return (1);
}
