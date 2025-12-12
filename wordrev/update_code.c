#include <unistd.h>

void put_str(char *str, int start, int end)
{
	int len = end - start + 1;
	write(1, str + start, len);
}

int len_str(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

void word_rev(char *str)
{
	int i = len_str(str) - 1;
	int end, start;

	while(i >= 0)
	{
		while(i >= 0 && (str[i] == ' ' || str[i] == '\t'))
			i--;
		end = i;
		while(i >= 0 && str[i] != ' ' && str[i] != '\t')
                	i--;
		start = i + 1;
		put_str(str, start, end);
		while(i >= 0 && (str[i] == ' ' || str[i] == '\t'))
                	i--;
		if(i >= 0)
			write(1, " ", 1);
		if(i < 0)
			break;
	}
}

int main (int ac, char **av)
{
	if(ac > 1)
		word_rev(av[1]);
	write(1, "\n", 1);
	return (0);
}
