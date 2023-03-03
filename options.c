#include <unistd.h>
#include "options.h"

int	main(int ac, char **av)
{
	if(ac >= 2)
	{
		if(!check_errors(av))
			return (0);
		print_resolt(av);
	}
	else
		write(1, "Invalid Option", 14);
	write(1, "\n", 1);
	return (0);
}

int	appears(char c, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while(av[i])
	{
		while(av[i][j] != '\0')
		{
			if(av[i][j] == c)
				return(1);
			j++;
		}
		i++;
		j = 1;
	}
	return(0);
}

void	print_resolt(char **av)
{
	int i;

	i = 7;
	char *str = "zyxwvutsrqponmlkjihgfedcba";
	write(1, "000000", 6);

	while(*str != '\0')
	{
		if(i%9 == 0)
		{
			write(1, " ", 1);
			i = 1;
		}
		else
		{
			if(appears(*str, av))
				write(1, "1", 1);
			else
				write(1, "0", 1);
			i++;
			str++;
		}
		//str++;
	}
}

int	valid_arguments(char **av)
{
	int	i;
	
	i = 1;
	while(av[i] != NULL)
	{
		if(av[i][0] != '-')
			return(0);
		i++;
	}
	return(1);
}

int	contents_char(char c)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	while(*str != '\0')
	{
		if(*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	is_valid_option(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while(av[i])
	{
		if(av[i][1] == 'h')
			return (0);
		j = 1;
		while(av[i][j] != '\0')
		{
			if(!contents_char(av[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_errors(char **av)
{
	if(!valid_arguments(av))
		return(0);
	if(!is_valid_option(av))
	{
		write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
		return(0);
	}
	return(1);
}
