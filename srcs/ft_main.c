#include "libft.h"
#include "memccpy.c"

// void int_test(int fill)
// {
//   int size = 5;
//   int a[size];
//   int i;
//
//   ft_memset(a, fill, size * sizeof(int));
//   printf("test with int: %d \n", fill);
//   i = 0;
//   while (i < 5)
//   {
//     printf("%d ", a[i]);
//     ++i;
//   }
//   printf("\n");
// }

int main(void)
{
    char t[4] = "1234";
		char d[4];

		d[2] = 'a';
		d[3] = '\0';
    printf("test with string \n");
    printf("%s\n", ft_memccpy(d, t, '2',4));
		printf("copied: %s\n", d);

		printf("test with string \n");
		printf("%s\n", ft_memccpy(d, t, 'x',4));
		printf("copied: %s\n", d);
		//
   	// int_test(0);
    // int_test(-1);
    // int_test(-2);
    // int_test(1);
    // int_test(2);

    return (1);
}
