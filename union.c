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

int	char_appeared_in_str(char a, char *s1)
{
	while(*s1 != '\0')
	{
		if(a == *s1)
			return (1);
		s1++;
	}
	return (0);
}

int	char_appeared_before(int index, char *str)
{
	int	i;

	i = 0;
	while(i < index)
	{
		if(str[i] == str[index])
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 1;
	if(s1[0] != '\0')
	{
		write(1, &s1[0], 1);
		while(s1[i] != '\0')
		{
			if(!char_appeared_before(i, s1))
				write(1, &s1[i], 1);
			i++;
		}
		i = 0;
		while(s2[i] != '\0')
		{	
			if((!char_appeared_in_str(s2[i], s1)) && (!char_appeared_before(i, s2)))
				write(1, &s2[i], 1);
			i++;
		}
	}
}
