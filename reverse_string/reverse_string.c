#include <unistd.h>

int len_str(char *str) {
	int i = 0;
	while(str[i])
		i++;
	return i;
}

void reverse_str(char *str) {
	int len = len_str(str) - 1;
	while(len >= 0) {
		write(1, &str[len], 1);
		len--;
	}
}

int main (int ac, char **av) {
	if (ac > 1)
		reverse_str(av[1]);
	write(1, "\n", 1);
	return 0;
}
