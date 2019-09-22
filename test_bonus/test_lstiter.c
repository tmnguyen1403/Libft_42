#include "../srcs/libft.h"

void	print_node(t_list *node)
{
	if (node)
		printf("content: %s\n", (char *)node->content);
}


void	test_itermultiple(const void *content, size_t content_size)
{
	t_list *node;

	printf("test iter multip node 1 with print_node function\n");
	node = ft_lstnew(content , content_size);
	if (node == 0)
	{
		printf("Error when create node\n");
		return ;
	}
	ft_lstadd(&node, ft_lstnew(content, content_size));
	ft_lstadd(&node, ft_lstnew(content, content_size));
	ft_lstadd(&node, ft_lstnew(content, content_size));
	ft_lstiter(node, print_node);
}

void	test_iter_multiitemlist(const void *content, size_t content_size)
{
	t_list *node;
	t_list *new;

	printf("test iter multip node 2 with print_node function\n");
	node = ft_lstnew(content , content_size);
	if (node == 0)
	{
		printf("Error when create node\n");
		return ;
	}
	new = ft_lstnew(content , content_size);
	ft_lstadd(&new, ft_lstnew(content, content_size));
	ft_lstadd(&new, ft_lstnew(content, content_size));
	ft_lstadd(&new, ft_lstnew(content, content_size));
	ft_lstadd(&node, new);
	ft_lstiter(node, print_node);
}

void	test_iternull()
{
	printf("test iter null node \n");
	ft_lstiter(0, print_node);
	printf("pass null test\n");
}

int main(void)
{
	test_iternull();
	test_itermultiple("abc", 3);
	test_iter_multiitemlist("145io", 5);
	return (0);
}
