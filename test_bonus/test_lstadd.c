#include "../srcs/libft.h"


void	print_list(t_list **alst)
{
	t_list	*curr;
	size_t	count;

	if (alst == 0 || *alst == 0)
		return ;
	curr = *alst;
	count = 0;
	while (curr)
	{
		printf("node %lu, content: %s\n", count, (char *)curr->content);
		curr = curr->next;
		++count;
	}
}

void	test_str(const void *content, size_t content_size)
{
	t_list *node;

	printf("test add single node \n");
	node = ft_lstnew(content , content_size);
	if (node == 0)
	{
		printf("Error when create node\n");
		return ;
	}
	ft_lstadd(&node, ft_lstnew(content, content_size));
	print_list(&node);
}

void	test_addmultiple(const void *content, size_t content_size)
{
	t_list *node;

	printf("test add multip node \n");
	node = ft_lstnew(content , content_size);
	if (node == 0)
	{
		printf("Error when create node\n");
		return ;
	}
	ft_lstadd(&node, ft_lstnew(content, content_size));
	ft_lstadd(&node, ft_lstnew(content, content_size));
	ft_lstadd(&node, ft_lstnew(content, content_size));
	print_list(&node);
}

void	test_add_multiitemlist(const void *content, size_t content_size)
{
	t_list *node;
	t_list *new;

	printf("test add multip node \n");
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
	print_list(&node);
}

void	test_addnull(const void *content, size_t content_size)
{
	t_list *node;

	printf("test add null node \n");
	node = ft_lstnew(content , content_size);
	if (node == 0)
	{
		printf("Error when create node\n");
		return ;
	}
	ft_lstadd(&node, 0);
	print_list(&node);
}

int main(void)
{
	test_str(0, 0);
	test_str(0, 1);
	test_str("abcd", 3);
	test_addnull("abef", 4);
	test_addmultiple("abef", 4);
	test_add_multiitemlist("abcef", 4);
	return (0);
}
