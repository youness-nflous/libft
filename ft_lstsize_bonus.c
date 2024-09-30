#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

//int	main()
//{
//	t_list node1;
//	t_list node2;
//	t_list node3;
//
//	node1.content = "hello";
//	node1.next = &node2;
//	node2.content = "world";
//	node2.next = &node3;
//	node3.content = "it's me";
//	node3.next = NULL;
//	t_list *header;
//	header = &node1;
//	printf("%d", ft_lstsize(header));
//	return (0);
//}
