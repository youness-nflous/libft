#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);

	while (lst->next)
		lst = lst->next;
	return (lst);
}

//int main()
//{
//	t_list node1;
//	t_list node2;
//	t_list node3;
//
//	node1.content = "hello";
//	node1.next = &node2;
//
//	node2.content = "world";
//	node2.next = &node3;
//
//	node3.content = "it's me";
//	node3.next = NULL;
//
//	t_list *header;
//
//	header = &node1;
//
//	printf("%s", (char *)ft_lstlast(header)->content);
//
//	return (0);
//}
