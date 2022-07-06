#include "libft.h"
#include <stdio.h>

/*
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
*/

int	main()
{
	char	x1[50] = "selam ";
	char	x2[50] = "bro ";
	char	x3[50] = "naber?";
	t_list	*x;
	t_list	*temp;


	x = ft_lstnew(x1);
	printf("%s\n", x -> content);
	temp = ft_lstnew(x2);
	ft_lstadd_front(&x, temp);
	ft_lstadd_front(&x, ft_lstnew(x3));
	printf("\n\nx[0] = %s\nx[1] = %s\nx[2] = %s\n", x -> content ,x -> next -> content, x -> next -> next -> content);
	return(0);
}
