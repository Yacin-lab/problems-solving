#include <unistd.h>

void ignoreSpaces(char *str)
{
	int i = 0;
	int j = 0;

	while(str[i])
	{
		if(str[i] != ' ' && str[i] != '\t')
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
}

int lowerCase(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (i - 1);
}

int check_palindrome(char *str)
{
	int i = 0;
        int j = 0;
	int end;

	if (!str[i])
		return (0);

	ignoreSpaces(str);
	end = lowerCase(str);

	while(i < end)
	{
		if(str[i] != str[end])
			return (0);
		i++;
		end--;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		if(check_palindrome(argv[1]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
