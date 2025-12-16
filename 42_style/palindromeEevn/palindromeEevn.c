#include <stdio.h>
#include <unistd.h>

int main () {

	char str[20];
	int i, j, end, sum;

	do{
		printf("Enter a string of digits: ");
        	scanf("%s", str);
		
		i = 0;	
		while (str[i])
		{
			if (str[i] >= '0' && str[i] <= '9')
				i++;
			else
				break;
		}
	} while (str[i] != '\0');

	// length of string
	end = 0;
	while (str[end])
		end++;
	end--;
	
	// check if string is a palindrome?
	i = 0;
	while (i < end)
	{
		if (str[i] == str[end])
		{
			i++;
			end--;
		} else
			break;
	}

	// sum of digits
	sum = 0;
	j = 0;
	while (str[j])
	{
		sum += str[j] - 48;
		j++;
	}
	
	// check two conditions
	if (i >= end && sum%2 == 0)
		write(1, "YES\n", 4);
	else
		write(1, "NO\n", 3);


	return 0;
}
