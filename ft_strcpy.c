#include <stdio.h>

//Main for muy own use -> for checking this function

char    *ft_strcpy(char *dst, char *src);

int	main(void)
{
	char	*src = "hola";
	char	dst[1000];

	printf("%s", (ft_strcpy(dst, src)));
	return(0);
}

char    *ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while(*src != '\0')
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return dst;
}
