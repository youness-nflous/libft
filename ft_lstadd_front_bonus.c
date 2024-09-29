#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
}

//int main()
//{
//	t_list node;
//	t_list new_node;
//
//	node.content = "anflous";
//	node.next = NULL;
//
//	new_node.content = "youness";
//	new_node.next = NULL;
//
//	t_list *header;
//
//	header = &node;
//
//	ft_lstadd_front(&header, &new_node);
//
//	printf("%s", (char *)header->content);
//	printf("%s", (char *)header->next->content);
//
//	return (0);
//}
