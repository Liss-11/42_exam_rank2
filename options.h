#ifndef OPTIONS_H
# define OPTIONS_H
# include <unistd.h>

int	check_errors(char **av);
int	valid_arguments(char **av);
int	is_valid_option(char **av);
int	contents_char(char c);
void	print_resolt(char **av);
int	appears(char c, char **av);


#endif
