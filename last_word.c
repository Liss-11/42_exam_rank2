#include <unistd.h>

void	last_word(char *str);

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
		len++;
	return (len - 1);
}

void	last_word(char *str)
{
	int len;
	int	end;
	int	start;

	end = -1;
	start = 0;
	if(*str != '\0')
	{
		len = ft_strlen(str);
		while(len >= 0 && (str[len] == ' ' || str[len] == '\t'))
			len--;
		if(len >= 0)
		{
			end = len;
			while(len >= 0 && (str[len] != ' ' && str[len] != '\t'))
				len--;
			start = len + 1;
		}
		if(start <= end && end != -1){
			while(start <= end)
			{
				write(1, &str[start], 1);
				start++;
			}
		}
	}
}

/*very short version!

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--;
		while (ft_isblank(*av[1]))
			av[1]--;
		while (*av[1] && !ft_isblank(*av[1]))
			av[1]--;
		av[1]++;
		while (*av[1] && !ft_isblank(*av[1]))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}*/

