#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	add_prime_sum(char *str);

int	main(int argc, char **argv)
{
	if(argc == 2)
		add_prime_sum(argv[1]);
	else
		printf("0");
	printf("\n");
	return (0);
}

int	ft_atoi(char *str)
{
	int	num;
	int i;

	num = 0;
	i = 0;
	while(str[i] != '\0')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num);
}

void	add_prime_sum(char *str)
{
	int	num;
	int	prime;
	int resp;
	int	d;

	resp = 0;
	prime = 2;
	num = ft_atoi(str);
	while(prime <= num)
	{
		resp += prime;
		prime++;
		d = 2;
		while(d < prime)
		{
			if(prime%d == 0)
			{
				prime++;
				d = 2;
			}
			else
				d++;
		}
	}
	printf("%d", resp);
}
