#include "libft.h"
#include "memset.c"

extern void *ft_memset(void *b, int c, size_t len);

void int_test(int fill)
{
  int size = 5;
  int a[size];
  int i;

  ft_memset(a, fill, size * sizeof(int));
  printf("test with int: %d \n", fill);
  i = 0;
  while (i < 5)
  {
    printf("%d ", a[i]);
    ++i;
  }
  printf("\n");
}

int main(void)
{
    char t[3] = "123";

    printf("test with string \n");
    printf("%s\n", ft_memset(t, 33, 1));

    int_test(0);
    int_test(-1);
    int_test(-2);
    int_test(1);
    int_test(2);

    return (1);
}
