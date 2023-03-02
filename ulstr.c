#include <unistd.h>

void	ulstr(char *str);

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		ulstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

void	ulstr(char *str)
{
	char	a;

	if(*str != '\0')
	{
		while(*str != '\0')
		{
			if(*str >= 'a' && *str <= 'z')
				a = *str - ('a'- 'A');
			else if(*str >= 'A' && *str <= 'Z')
				a = *str + ('a' - 'A');
			else
				a = *str;
			write(1, &a, 1);
			str++;
		}
	}
}
