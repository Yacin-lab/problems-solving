#include <unistd.h>

void ft_putchar(char c) 
{
        write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if (nbr > 9)
                ft_putnbr(nbr / 10);
        ft_putchar((nbr % 10) + '0');
}

void count_substring_occurrences(char *txt, char *pattern)
{
    int i, k, j;
    int count = 0;

    if(!pattern[0])
	    return;

    i = 0;
    while (txt[i])
    {
        j = 0;
	k = i;
        while((txt[k] == pattern[j]) && pattern[j] && txt[k])
        {
		k++;
		j++;
        }
        if(pattern[j] == '\0')
	{    
		count++;
		i = k - 1;
	}
        i++;
    }
    ft_putnbr(count);
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        count_substring_occurrences(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return 0;
}
