#include <unistd.h>

int main ()
{
	int start, end, prt, length;
	char str[] = "hello world from me";

	length = 0;
	while(str[length])
		length++;
	length--;

	while (length >= 0)
	{
		end = length;
		while (str[end] == ' ')
			end--;

		start = end;
		while (start >= 0 && str[start] != ' ')
			start--;

		prt = start + 1;	
		while (prt <= end)
		{
			write(1, &str[prt], 1);
			prt++;
		}
		if (start > 0)
			write(1, " ", 1);

		length = start;
	}
	write(1, "\n", 1);

	return 0;
}
