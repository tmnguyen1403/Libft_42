#include "../srcs/libft.h"

void	test(char const *s, char c, size_t nb_words)
{
	char		**arr;
	size_t	index;

	arr = ft_strsplit(s, c);
	if (arr == 0)
		return ;
	index = 0;
	while (index < nb_words)
	{
		printf("%s\n", arr[index]);
		++index;
	}
}

int main(void)
{
	test("abc", '\0', 1);
	test("*hello*fellow***students*", '*', 3);
	test("", '\0', 0);
	test("****", '*', 0);
	test("a*b*c", '*', 3);
	test("a/b//", '/', 2);
}
