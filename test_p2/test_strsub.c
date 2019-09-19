#include "../srcs/libft.h"

char		*(*f)(char const *, unsigned int start, size_t len);

void test()
{
	printf("expect(null) : %s\n", f("", 0, 1));
	printf("expect(null) : %s\n", f("", 0, 0));
	printf("expect(a) : %s\n", f("a", 0, 1));
	printf("expect(null) : %s\n", f("a", 0, 2));
	printf("expect(null) : %s\n", f("a", 1, 1));
	printf("expect(a) : %s\n", f("ab", 0, 1));
	printf("expect(ab) : %s\n", f("ab", 0, 2));
	printf("expect(ab) : %s\n", f("ab", 0, 3));
	printf("expect(b) : %s\n", f("ab", 1, 1));
	printf("expect(null) : %s\n", f("ab", 1, 2));
	printf("expect(null) : %s\n", f("abc", 3, 1));

}

int main(void)
{
	f = &ft_strsub;
	test();
}
