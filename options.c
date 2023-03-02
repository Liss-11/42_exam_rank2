#include "options.h"

int	main(int ac, char **av)
{
	if(ac >= 2)
	{
		if(check_errors)
			return (0);
	}
	else
		write(1, "Invalid Option", 14);
	write(1, "\n", 1);
	return (0);
}

int	input_errors()
{
	//miro que todos los argumentos empiecen en -
	//miro que los argumentos tengan solo los caracteres permitidos
}
