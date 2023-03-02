#include <unistd.h>

int	hidenp(char *str1, char *str2);

int	main(int argc, char **argv)
{
	if(argc == 3)
	{
		if(hidenp(argv[1], argv[2]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}

int	hidenp(char *str1, char *str2)
{
	if(str1[0] == '\0')
		return(1);
	while(*str1 != '\0' && *str2 != '\0')
	{
		while(*str2 != '\0')
		{
			if(*str1 == *str2)
					str1++;
			if(*str1 == '\0')
				return (1);
			str2++;
		}
	}
	return (0);
}
