#include "../srcs/libft.h"

int main(void)
{
	char t[5] = "1234";
	printf("Before clear: %s\n", t);
	ft_strclr(t);
	printf("After clear: %s\n", t);
}
