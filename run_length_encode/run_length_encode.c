#include <unistd.h>

void put_nbr(int num);

int main (int argc, char *argv[]) {
	
	if (argc < 2 || argc > 2) {
	
		write(1, "\n", 1);
		return 0;
	}
	
	if (argv[1][0] == '\0') {
	
		write(1, "\n", 1);
		return 0;
	}
	
	int count = 1;
	int i = 0;
	while (argv[1][i]) {
	
		if (argv[1][i] == argv[1][i + 1])
			count += 1;
		else {
			write(1, &argv[1][i], 1);
			put_nbr(count);
			count = 1;
		}
		i++;
	}

	 write(1, "\n", 1);	

	return 0;
}

void put_nbr(int num) {

	char tmp[10];
	int i = 0;
	
	if (num == 0)
	{
		write(1, "0", 1);
		return;
	}

	while (num > 0) {
		
		tmp[i] = (num % 10) + '0';
		num /= 10;
		i++;	
	}

	while (i > 0) {
		i--;
		write(1, &tmp[i], 1);
	}
}
