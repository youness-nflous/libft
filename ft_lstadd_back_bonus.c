#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;
	
	// if the new is NULL exit the function.
	if (!new)
		return;
	// if the header pointer point to NULL the new will be first.
	if (!*lst)
	{
		*lst = new;
		return;
	}
	
	// next of the last node NULL, will be address of new
	// mean's the last node is 'new', not node2 anymore.
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

//int main()
//{
//	t_list	node1;
//	t_list	node2;
//	t_list	new;
//
//	node1.content = "hello";
//	node1.next = &node2;
//
//	node2.content = "world";
//	node2.next = NULL;
//
//	new.content = "it's me!";
//	new.next = NULL;
//
//	t_list *header;
//
//	//header = NULL;
//	header = &node1;
//
//	ft_lstadd_back(&header, &new);
//
//	printf("%s\n", (char *)header->content);
//	printf("%s\n", (char *)header->next->content);
//	printf("%s\n", (char *)header->next->next->content);
//
//	return (0);
//}
