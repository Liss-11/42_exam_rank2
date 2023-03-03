#include "list.h"


void swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ascending(int a, int b)
{
		return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*first;
	t_list	*my_next;

	first = lst;
	while(lst)
	{
		my_next = lst->next;
		while(my_next)
		{
			if(!(*cmp)(lst->data, my_next->data))
				swap(&lst->data, &my_next->data);
			my_next = my_next->next;
		}
		lst = lst->next;
	}
	return (first);
}

int	main(void)
{

	
}
