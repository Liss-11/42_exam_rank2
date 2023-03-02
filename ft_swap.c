#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	printf("%d", *a);
	*a = *b;
	*b = temp;
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if(ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		printf("%d", a);
		ft_swap(&a, &b);
		printf("%d", a);
	}
	write(1, "\n", 1);
	return (0);
}
