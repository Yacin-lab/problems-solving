#include <unistd.h>

void	join_separator(char *sep, char *str);
void	put_str(char *str);

int	main(int counter, char **args)
{
	if(counter < 3)
	{	
		write(1, "\n", 1);
		return (0);
	}

	int	i;
        char	separator[10];

	join_separator(separator, args[1]);

	i = 2;
	while(counter > 2)
	{
		put_str(args[i]);
		if(counter > 3)
			put_str(separator);
		i++;
		counter--;
	}
	write(1, "\n", 1);
	return  (0);
}

void	join_separator(char *sep, char *str)
{
	int     i;

	i = 0;
	while(str[i])
	{
		sep[i] = str[i];
		i++;
	}
	sep[i] = '\0';
}

void	put_str(char *str)
{
	int     i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
