#include "libft.h"
#include "memcpy.c"

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

    printf("test with string \n");
    printf("%s\n", memcpy(d, t, 4));
		//
   	// int_test(0);
    // int_test(-1);
    // int_test(-2);
    // int_test(1);
    // int_test(2);

    return (1);
}
