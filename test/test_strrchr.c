#include "../srcs/libft.h"

void	test_normal()
{
	char s[100] = "helloef";
	printf("Test1:\n");
	printf("%s\n", strrchr(s, 'e'));
	printf("%s\n", ft_strrchr(s, 'e'));
	printf("Test2:\n");
	printf("%s\n", strrchr(s, 0));
	printf("%s\n", ft_strrchr(s, 0));
	printf("Test3:\n");
	printf("%s\n", strrchr(s, -2));
	printf("%s\n", ft_strrchr(s, -2));
	printf("Test4:\n");
	printf("%s\n", strrchr(s, 'h'));
	printf("%s\n", ft_strrchr(s, 'h'));
	printf("Test5:\n");
	printf("%s\n", strrchr(s, 'f'));
	printf("%s\n", ft_strrchr(s, 'f'));
	printf("Test6:\n");
	printf("%s\n", strrchr("", 'f'));
	printf("%s\n", ft_strrchr("", 'f'));
	printf("Test7:\n");
	printf("%s\n", strrchr("", 0));
	printf("%s\n", ft_strrchr("", 0));
	printf("Test8:\n");
	printf("%s\n", strrchr("aabbaa", 'a'));
	printf("%s\n", ft_strrchr("aabbaac", 'b'));
}

int	main(void)
{
	test_normal();
	return (1);
}
