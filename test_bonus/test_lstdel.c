#include "../srcs/libft.h"

void	del_content(void *content, size_t n)
{
	if (n > 0)
		free(content);
}

void	test_str(const void *content, size_t content_size)
{
	t_list *node;

	printf("test delete with (%s), size: %lu\n", (char *)content, content_size);
	node = ft_lstnew(content , content_size);
	if (node)
	{
		printf("has node, content: %s, content_size: %lu\n", (char *)node->content, node->content_size);
		ft_lstdel(&node, del_content);
		if (node == 0)
			printf("delete success\n");
		else
			printf("Fail to delete\n");
	}
}

void	test_nb(const void *content, size_t content_size)
{
	t_list *node;
	int			*arr;
	size_t	index;

	arr = (int *)content;
	index = 0;
	printf("test delete with array, size: %lu\n", content_size / 4);
	while (index < content_size / 4)
	{
		printf("a[%lu] = %d\n", index, arr[index]);
		++index;
	}
	node = ft_lstnew(content , content_size);
	if (node)
	{
		ft_lstdel(&node, del_content);
		if (node == 0)
			printf("delete success\n");
		else
			printf("Fail to delete\n");
	}
}

void test_list_2()
{
	t_list *node;

	node = ft_lstnew("123", 3);
	node->next = ft_lstnew("abc", 3);
	node->next->next = ft_lstnew("liok", 4);
	ft_lstdel(&node, del_content);
}

int main(void)
{
	printf("Test with 1-member list:\n");
	test_str(0, 0);
	test_str(0, 1);
	test_str("abcd", 3);
	test_str("abcd", 4);
	test_str("abcd", 5);
	test_str("abcd", 6);

	int a[1] = {15};
	test_nb((void *)a, 4);
	int *b = 0;
	test_nb((void *)b, 1);
	int c[3] = {15, 20, -190};
	test_nb((void *)c, 12);
	printf("Test with multi-member list:\n");
	test_list_2();
	return (0);
}
