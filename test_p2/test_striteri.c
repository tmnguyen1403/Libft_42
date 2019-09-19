#include "../srcs/libft.h"

void clear(unsigned int index, char *s)
{
	printf("%u\n", index);
	*s = '\0';
}

void rotate_by_index(unsigned int index, char *s)
{
	*s += index;
}

int main(void)
{
	char t[5] = "1234";

	printf("Test empty:\n");
	ft_striteri("", &clear);
	printf("Test null-terminated: \n");
	ft_striteri("\0", &clear);
	printf("Before apply clear: %s\n", t);
	ft_striteri(t, &clear);
	printf("After apply clear: %s\n", t);

	char d[10] = "434acdfg";
	printf("Before apply rotate by index: %s\n", d);
	ft_striteri(d, &rotate_by_index);
	printf("After apply rotate by index: %s\n",d);
}
