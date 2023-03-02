#include <unistd.h>

void	rot_13(char *str);

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		rot_13(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

void	rot_13(char *str)
{
	int	a;
	char letter;

	if(str[0] != '\0')
	{
		while(*str != '\0')
		{
			if((*str >= 'a' && *str <= 'z') ||(*str >= 'A' && *str <= 'Z'))
			{
				if(*str <= 'm' && *str >= 'a')
				{
					a = *str - 'a';
					letter = 'z' - (12 - a);
					write(1, &letter, 1);
				}
				else if(*str <= 'M' && *str >= 'A')
				{
					a = *str - 'A';
					letter = 'Z' - (12 - a);
					write(1, &letter, 1);
				}
				else
				{
					letter = *str;
					letter -= 13;
					write(1, &letter, 1);
				}
			}
			else
			{
				write(1, str, 1);
			}
			str++;
		}
	}
}
