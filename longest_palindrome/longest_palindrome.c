#include <unistd.h>

int ft_lenstr(char *str)
{
	int i = 0;
	while(str[i])
		i++;

	return (i);
}

int expand(char *str, int start, int end, int size) 
{

	while (start >= 0 && end < size && str[start] == str[end])
	{
		start--;
		end++;
	}
	return (end - 1 - start);
}

int longest_palindrom(char *str, int *start)
{
	int size = ft_lenstr(str);
	int max_len = 1;
	int i;

	i = 0;
	while(str[i])
	{
		int lenOdd = expand(str, i, i, size);
		int lenEven = expand(str, i, i + 1, size);
		int len = (lenOdd > lenEven) ? lenOdd : lenEven;

		if (len > max_len)
		{
			max_len = len;
			*start = i - (len - 1) / 2;
		}
		i++;
	}

	return (max_len);
}

int main (int c, char **v)
{
	if (c > 1)
	{
		char *str = v[1];
		int start = 0;
		int len;

		len = longest_palindrom(str, &start);
		write(1, str + start, len);
		write(1, "\n", 1);
	} else
		write(1, "\n", 1);

	return (0);
}
