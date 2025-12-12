#include <unistd.h>

int main ()
{
	int i, j, tmp;
	int next_letter = 0;
	char str[] = "a1b2c3D";

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			tmp = str[i];

			j = i - 1;
			while (j >= next_letter)
			{
				str[j + 1] = str[j];
				j--;
			}
			str[next_letter] = tmp;
			next_letter++; // new place for next letter
		}
		i++;
	}
	write(1, str, i);

	return 0;
}
