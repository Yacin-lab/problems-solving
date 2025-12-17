#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	while(*argv[i])
	{
		while((*argv[j] < 'a' && *argv[j] > 'z') || (*argv[j] < 'A' && *argv[j] > 'Z'))
		{
			j++;
		}
		while(*argv[j] && ((*argv[j] >= 'a' && *argv[j] <= 'z') || (*argv[j] >= 'A' && *argv[j] <= 'Z')))
		{
			if(*argv[j] >= 'a' && *argv[j] <= 'z')
				*argv[j] -= 48;
			if(*argv[j + 1] >= 'A' && *argv[j + 1] <= 'Z')
				*argv[j + 1] += 48;
			j++;
		
		}
		i++;
	}

	//Preparing_string
	//loop same time,
	//	count lent and check if ther any lettres and make all letters lowercase
	//	if no lettres, print argument + \n and return.
	//
	//Prossecing_string
	//loop while element != letter
	//	loop while element == letter,
	//		if first element >= a & element <= z
	//			element - 48
	//		else break the loop
	//		if next element >= A & element <= Z
	//			element + 48
	//		else break the loop
	//

	write(1, "\n", 1);
	return (0);
}


/*
#include <stdio.h>
#include <unistd.h>

int     main()
{
    char *argv = "hello world!";
    int     i, j;
    i = 0;
    j = 0;

    while(argv[i])
    {
        while((argv[j] < 'a' && argv[j] > 'z') || (argv[j] < 'A' && argv[j] > 'Z'))
        {
                j++;
        }
        while(argv[j] && ((argv[j] >= 'a' && argv[j] <= 'z') || (argv[j] >= 'A' && argv[j] <= 'Z')))
        {
            if(argv[j] >= 'a' && argv[j] <= 'z')
                    argv[j] -= 48;
            if(argv[j + 1] >= 'A' && argv[j + 1] <= 'Z')
                    argv[j + 1] += 48;
            j++;

        }
        i++;
    }

    printf("%s\n", argv);
    write(1, "\n", 1);
    return (0);
}*/
