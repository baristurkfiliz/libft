#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*temp;

	temp = lst;
	size = 0;
	while (temp -> next)
	{
		size++;
		temp = temp -> next;
	}
	size++;
	return (size);
}
