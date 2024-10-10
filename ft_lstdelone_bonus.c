#include <stdio.h>
#include <stdlib.h>

typedef	struct	s_list
{
	void *content;
	struct	s_list *next;
}t_list;

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// void (*del)(void *) => function as parameter
// del : function pointer to a function the deletes the content of the node.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return;
	del(lst->content);
	free(lst);
}

void	delete_content(void *content)
{
	free(content);
}

int	main()
{
	t_list *node1;
	t_list *node2;

	node1 = malloc(sizeof(t_list));
	if (!node1)
		return (1);

	node2 = malloc(sizeof(t_list));
	if (!node2)
		return (1);

	node1->content = malloc(6);
	if (!node1->content)
	{
		return (1);
	}

	node2->content = malloc(6);
	if (!node2->content)
	{
		return (1);
	}

	ft_strcpy(node1->content, "hello");
	ft_strcpy(node2->content, "world");

	node1->next = node2;
	node2->next = NULL;

	printf("%s\n", (char *)node1->content);
	printf("%s\n", (char *)node2->content);

	ft_lstdelone(node1, delete_content);

	return (0);
}
