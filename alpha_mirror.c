#include <unistd.h>

void	alpha_mirror(char *str);

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

void	alpha_mirror(char *str)
{
	char a;

	if(*str != '\0')
	{
		while(*str != '\0')
		{
			if(*str >= 'A' && *str <= 'Z')
				a = 'Z' - (*str - 'A');
			else if(*str >= 'a' && *str <= 'z')
				a = 'z' - (*str - 'a');
			else
				a = *str;
			write(1, &a, 1);
			str++;
		}
	}
}
