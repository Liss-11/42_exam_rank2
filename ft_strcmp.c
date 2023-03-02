#include <stdio.h>

//main to check the function

int    ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1 = "hola";
	char	*s2 = "hola ";

	printf("%d", ft_strcmp(s1, s2));
	return (0);
}

int    ft_strcmp(char *s1, char *s2)
{
	while(*s1 != '0' && *s2 != '0')
	{
		if(*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
