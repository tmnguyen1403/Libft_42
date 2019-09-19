#include "../srcs/libft.h"

int main(void)
{
	char *t;
	size_t length;

	t = ft_strnew(5);
	printf("new string, length 5: %s\n", t);
	length = 0;
	while (length < 5)
	{
		if (t[length] != '\0')
			break ;
		++length;
	}
	printf("check init value, expect length 5: %lu\n", length);
}
