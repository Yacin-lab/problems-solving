//UPDATE CODE
#include <unistd.h>

int ft_letter(char letter)
{
        if((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
                return (1);
        else
                return (0);
}

void ft_UPPERCASE(char c)
{
        if(c >= 'a' && c <= 'z')
                c -= 32;
        write(1, &c, 1);
}

void ft_lowercase(char c)
{
        if(c >= 'A' && c <= 'Z')
                c += 32;
        write(1, &c, 1);
}

int     main(int argc, char **argv)
{
        int     k;
        int     i;

        if(argc == 2)
        {
                k = 0;
                i = 0;
                while(argv[1][i])
                {
                        if(ft_letter(argv[1][i]))
                        {
                                if(k % 2 == 0)
                                        ft_UPPERCASE(argv[1][i]);
                                else
                                        ft_lowercase(argv[1][i]);
                                k++;
                        }
                        else
                                write(1, &argv[1][i], 1);
                        i++;
                }
        }
        write(1, "\n", 1);
        return (0);
}

/*#include <unistd.h>

int ft_letter(char letter)
{
	if((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
		return (1);
	else
		return (0);
}

int ft_UPPERCASE(char *c)
{
	if(*c >= 'a' && *c <= 'z')
		*c -= 32;
	return (0);
}

int ft_lowercase(char *c)
{
	if(*c >= 'A' && *c <= 'Z')
		*c += 32;
	return (1);
}

int	main(int argc, char **argv)
{
	int	status;
	int	i;

	if(argc == 2)
	{
		status = 1;
		i = 0;
		while(argv[1][i])
		{
			if(ft_letter(argv[1][i]))
			{
				if(status)
					status = ft_UPPERCASE(&argv[1][i]);
				else
					status = ft_lowercase(&argv[1][i]);
			}
			i++;
		}

		i = 0;
		while(argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}

	write(1, "\n", 1);
	return (0);
}*/
