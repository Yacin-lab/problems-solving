#include <unistd.h>

... check_palindrome(char *str)
{
	char buff[100];
	int i, j;
	
	j = 0;
	i = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		while(str[i] && (str[i] != ' ' || str[i] != '\t'))
		{
			buff[j] = str[i];
			j++;
			i++;
		}
	}
}

int main(int argc, char *argv[])
{
	if(argc > 1)
		check_palindrome(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
