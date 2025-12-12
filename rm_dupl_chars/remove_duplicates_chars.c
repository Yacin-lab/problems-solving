#include <unistd.h>

void rm_dupChar(char *str)
{
	int	j;
	int	i;
 
	i = 0;
	while(str[i])
	{
		j = i - 1;
		while(j >= 0 && str[i] != str[j])
			j--;

		if(j < 0)
			write(1, str + i, 1);
		i++;
	}
}

int main (int ac, char **av)
{
	if(ac > 1)
		rm_dupChar(av[1]);
	write(1, "\n", 1);
	return 0;
}
