#include "quiz.h"

int	read_line(char *buffer, int size)
{
	int count = read(0, buffer, size);
	int i = 0;
	while (i < size)
	{
		if (buffer[i] == '\n')
		{
			buffer[i] = '\0';
			return (count);
		}
		buffer[size - 1] = '\0';
		i++;
	}
	return (count);
}
