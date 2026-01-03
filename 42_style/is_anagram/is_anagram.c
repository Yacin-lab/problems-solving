#include <unistd.h>

char lowercase(char letter)
{
	if(letter >= 'A' && letter <= 'Z')
		letter += 32;
	return letter;
}

int checkLength(char *str)
{
	int len = 0;

	while(*str)
	{
		len++;
		str++;
	}
	return (len);
}

char* ignore_spaces(char *pointer, char *buff)
{
	int i = 0;

	while(*pointer)
	{
		while(*pointer && (*pointer == ' ' || *pointer == '\t'))
			pointer++;
		while(*pointer && *pointer != ' ' && *pointer != '\t')
		{
			buff[i] = *pointer;
			i++;
			pointer++;
		}
	}
	buff[i] = '\0';
	return (buff);
}

void is_anagram(char *firstWord, char *lastWord)
{
	char buff1[100];
	char buff2[100];
	char *first = ignore_spaces(firstWord, buff1);	// ignore spaces exp: ' he ll o ' ==> 'hello'
        char *last = ignore_spaces(lastWord, buff2);

	if(checkLength(first) != checkLength(last))	// make sure the two words are the same length
	{
		write(1, "0", 1);
		return;
	}
	int i = 0;
	while(first[i])
	{
		int j = 0;
		while(1)
		{
			if(last[j] == '\0')
			{
				write(1, "0", 1);
				return;
			}
			if(lowercase(first[i]) != lowercase(last[j]))
				j++;
			else
			{
				last[j] = '*';		// Mark the similar letter 
				break;
			}
		}
		i++;
	}
	write(1, "1", 1);
}

int main(int argc, char **argv)
{
	if(argc == 3)
		is_anagram(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
