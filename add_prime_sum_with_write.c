#include <unistd.h>
#include <stdlib.h>

void	add_prime_sum(char *str);

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		add_prime_sum(argv[1]);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sum;

	sum = 0;
	while(*str != '\0')
	{
		sum = (sum * 10) + (*str - '0');
		str++;
	}
	return (sum);
}

int	sum_primes(int	num)
{
	int	prime;
	int	sum;
	int	d;

	prime = 2;
	sum = 0;
	while(prime <= num)
	{
		d = 2;
		while(d < prime)
		{
			if(prime%d == 0)
			{
				d = 2;
				prime++;
			}
			else
				d++;
		}
		sum += prime;
		prime++;
	}
	return sum;
}

void	ft_itoa(int num)
{
	int	print;

	if(num > 9)
	{
		print = (num%10) + '0';
		ft_itoa(num/10);
		write(1, &print, 1);
	}
	if(num <= 9)
	{
		print = num + '0';
		write(1, &print, 1);
	}

}

void	add_prime_sum(char *str)
{
	int	num;

	if(*str == '\0')
	{
		write(1, "0\n", 2);
		exit(0);
	}
	num = ft_atoi(str);
	ft_itoa(sum_primes(num));
}
