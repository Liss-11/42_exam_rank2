#include <stdio.h>
#include <stdlib.h>

void	fprime(char *str);

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		fprime(argv[1]);
	}
	printf("\n");
	return (0);
}

void	fprime(char *str)
{
	int number;
	int	prime;
	int	sum;

	sum = 1;
	number = atoi(str);
	if (number == 1)
		printf("%d", number);
	while(sum < atoi(str) && number != 1)
	{
		if(sum != 1)
			printf("*");
		prime = 2;
		while(number%prime != 0)
		{
			prime++;
		}
		printf("%d", prime);
		number /= prime;
		sum *= prime;
	}
}
