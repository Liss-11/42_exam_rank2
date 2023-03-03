#include <unistd.h>
#include <stdio.h>


void	print_bits(char c);
void	compose_char(int bit);
void print_negate_char(char c);

unsigned char	reverse_all_bits(unsigned char octet)
{
	char c = '\0';
	int	num_bit;

	num_bit = 0;
	while(num_bit < 8)
	{
		if((octet & (1 << num_bit)) != 0)
			c = c | (128 >> num_bit);
		num_bit++;
	}
	print_bits(c);
	return c;
}


unsigned char	reverse_bits(unsigned char octet)
{
	octet =  (octet << 4) + (octet >> 4);
	printf("El caracter revertido es:\n");
	print_bits(octet);
	return(octet);
}

int	main(void)
{
	reverse_bits('c');
	print_bits('c');
	print_negate_char('c');
	reverse_all_bits('c');
	compose_char(0);
	compose_char(1);
	compose_char(1);
	compose_char(0);
	compose_char(0);
	compose_char(0);
	compose_char(1);
	compose_char(1);
	return(0);
}

void print_negate_char(char c)
{
	c = ~c;
	printf("El caracter negado es:\n");
	print_bits(c);
}

void print_bits(char octet){

	int num_bit;
	num_bit = 0;
	while(num_bit < 8)
	{
		if((octet & (128 >> (num_bit))) == 0)
			printf("0");
		else
			printf("1");
		num_bit++;
	}
	printf("\n");
}

void compose_char(int bit)
{
	static char c = '\0';
	static int bit_count = 0;

	//c = 0000000
	if(bit == 1)
		c = c | (128 >> bit_count);
	
	bit_count++;

	if(bit_count == 8)
	{
		printf("hemos recompuesto un caracter |%c|", c);
		bit_count = 0;
		c = '\0';
	}
}

