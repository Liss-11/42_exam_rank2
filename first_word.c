#include <unistd.h>

int	is_blank(char c)
{
	if(c == ' ' || c == '\t')
		return (1);
	return(0);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(*argv[1] != '\0' && is_blank(*argv[1]))
			argv[1]++;
		while(*argv[1] != '\0' && !is_blank(*argv[1]))
		{
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
