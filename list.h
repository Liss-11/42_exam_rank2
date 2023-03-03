#ifndef LIST_H
# define LIST_H

typedef	struct		s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

void swap(int *a, int *b);

int ascending(int a, int b);

#endif
