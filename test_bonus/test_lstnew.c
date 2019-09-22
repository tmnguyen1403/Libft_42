#include "../srcs/libft.h"

void	test_str(const void *content, size_t content_size)
{
	t_list *node;

	printf("test with (%s), size: %lu\n", (char *)content, content_size);
	node = ft_lstnew(content , content_size);
	if (node)
	{
		printf("has node, content: %s, content_size: %lu\n", (char *)node->content, node->content_size);
		free(node);
		node = 0;
	}
}

void	test_nb(const void *content, size_t content_size)
{
	t_list *node;
	int			*arr;
	size_t	index;

	arr = (int *)content;
	index = 0;
	printf("test with array, size: %lu\n", content_size / 4);
	while (index < content_size / 4)
	{
		printf("a[%lu] = %d\n", index, arr[index]);
		++index;
	}
	node = ft_lstnew(content , content_size);
	// if (node)
	// {
	// 	printf("has node, content: %s, content_size: %lu\n", (char *)node->content, node->content_size);
	// 	free(node);
	// 	node = 0;
	// }
}

int main(void)
{
	test_str(0, 0);
	test_str(0, 1);
	test_str("abcd", 3);
	test_str("abcd", 4);
	test_str("abcd", 5);
	test_str("abcd", 6);
	return (0);
}
