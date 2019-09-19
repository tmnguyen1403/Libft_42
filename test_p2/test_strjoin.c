#include "../srcs/libft.h"

char		*(*f)(char const *, char const *);

void test()
{
	printf("join 2 nul-terminated, expect() : %s\n", f("\0", "\0"));
	printf("join 2 empty, expect() : %s\n", f("", ""));
	printf("first empty: expect(abc) : %s\n", f("abc", ""));
	printf("second empty: expect(abc) : %s\n", f("", "abc"));
	printf("first null-terminated: expect(abc) : %s\n", f("\0", "abc"));
	printf("second null-terminated: expect(abc) : %s\n", f("abc", "\0"));
	printf("abc + def: expect(abcdef) : %s\n", f("abc", "def"));
	printf("\\0abc + \\0def: expect() : %s\n", f("\0abc", "\0def"));
	printf("abc\\0y1 + def\\0i90: expect(abcdef) : %s\n", f("abc\0y1", "def\0i90"));
	printf("amy + lemerk: expect(amylemerk) : %s\n", f("amy", "lemerk"));
	printf("lemerk + amy: expect(lemerkamy) : %s\n", f("lemerk", "amy"));

}

int main(void)
{
	f = &ft_strjoin;
	test();
}
