#include <unistd.h>
#include <stdio.h>

int ft_count(char **argv);
void ft_putnbr(int nbr);

int main (int argc, char **argv) {

	int count;

	if (argc < 2) {
		write(1, "0\n", 2);
		return 0;
	}

	count = ft_count(argv);
	
	ft_putnbr(count);
	
	return 0;
}

int ft_count(char **argv) {

	int i = 0;

	while(argv[1][i])
                i++;
	
	return i;
}

void ft_putnbr(int nbr) {

	char c;
	int digit, rev = 0;

	while (nbr > 0) {
	
		rev = rev * 10 + (nbr % 10);
		nbr /= 10;
	}

	while (rev > 0) {
		
		digit = rev % 10;
		c = digit + 48;
		write(1, &c, 1);
		rev /= 10;
	}
	write(1, "\n", 1);

}
