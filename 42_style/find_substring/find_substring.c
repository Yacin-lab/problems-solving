#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if(nbr == -1)
    {
        write(1, "-1", 2);
        return;
    }
    if(nbr > 9)
        ft_putnbr(nbr / 10);
    char c = (nbr % 10) + '0';
    ft_putchar(c);
}

void find_substring(char *text, char *pattern)
{
    int     i;
    int     j;
    int     k;

    if(pattern[0] == '\0')
    {
        ft_putnbr(-1);
        return;
    }
    i = 0;
    while(text[i])
    {
        j = 0;
        k = i;
        while((pattern[j] == text[k]) && pattern[j] && text[k])
        {
            j++;
            k++;
        }
        if (pattern[j] == '\0')
        {
            ft_putnbr(i);
            return;
        }
        i++;
    }
    ft_putnbr(-1);
}

int	main(int argc, char **argv)
{

	if(argc == 3)
		find_substring(argv[1], argv[2]);
    else
        ft_putnbr(-1);
    write(1, "\n", 1);
	return (0);
}
