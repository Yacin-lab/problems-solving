#include <unistd.h>

void put_char(char c)
{
	write(1, &c, 1);
	write(1, " ", 1);
}

void put_nbr(int nbr)
{
	if(nbr > 9)
		put_nbr(nbr / 10);
	put_char((nbr % 10) + '0');
}

void rotate_array(int *arr, int size, int k)
{
	int j;
	int tmp;
	int i = 0;
	while(i < k)
	{
		j = size - 1;
		tmp = arr[j];
		while(j > 0)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = tmp;
		i++;
	}
	return;
}
#define size 5
int main(void)
{
	int arr[size] = {1, 2, 3, 4, 5};
	int k = 2;
	rotate_array(arr, size, k);
	int i = 0;
	while(i < size)
	{
		put_nbr(arr[i]);
		i++;
	}
	return (0);
}
