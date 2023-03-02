#include <unistd.h>

void	ft_union(char *s1, char *s2);

int	main(int ac, char **av)
{
	if(ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
	return (0);
}

int	compare(char a, char *s1)
{
	while(s1)
	{
		if(a == *s1)
			return (0);
		s1++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 1;
	if(s1[0] != '\0')
	{
		write(1, &s1[0], 1);
		j = 0;
		while(s1[i] != '\0' && j < i)
		{
			if(s1[i] != s1[j])
					j++;
			if(j == i)
				write(1, &s1[i], 1);
			else
			{
				j = 0;
				i++;
			}
		}
		if(!compare(s2[0], s1))
			write(1, &s2[0], 1);
		i = 1;
		j = 0;
		while(s2[i] != '\0' && j < i)
		{	
			j = 0;
			if(!compare(s2[i], s1))
			{
				while(j < i)
				{
					if(s2[i] != s2[j])
						j++;
				}
				if(j == i)
					write(1, &s2[i], 1);
			}
			i++;
		}
	}
}
