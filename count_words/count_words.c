#include <unistd.h>

void put_char(char c)
{
	write(1, &c, 1);
}

void put_nbr(int n)
{
	if(n > 9)
		put_nbr(n / 10);

	put_char((n % 10) + '0');
}

int main (int ac, char **av)
{
	char *str = av[1];
	int count = 0;
	int i = 0;

	if (ac > 1)
	{
		while (str[i])
		{
			while ((str[i] == ' ' || str[i] == '\t') && str[i])
				i++;

			if(str[i])
			{
				count++;
				while (str[i] != ' ' && str[i] != '\t' && str[i])
					i++;
			}
		}
		put_nbr(count);
	} else 
		write(1, "0", 1);
	write(1, "\n", 1);

	return (0);
}
