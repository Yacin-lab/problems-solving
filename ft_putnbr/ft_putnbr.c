
// recursion
void ft_putchar(char c) {

	write(1, &c, 1);
}

void ft_putnbr(int nbr) {

	if (nbr == -2147483648) {	// or long nbr = num;
		ft_putchar('-');	// but had tri9a bach katkhdm function putnbr
		ft_putchar('2');
		nbr = 147483648;
	}

	if (nbr < 0) {			// darori number makhsch ikon = -2147483648 ila makhdmt b long
					// 7it int 7dha 2147483647
		ft_putchar('-');
		nbr *= -1;
	}

        if (nbr > 9)
                ft_putnbr(nbr / 10);
        
        ft_putchar((nbr % 10) + '0');
}

// loops
void ft_putnbr(int nbr) {
	long power = 1;

	if (nbr == -2147483648) {
		ft_putchar('-');
		ft_putchar('2');
		nbr = 147483648;
	}
	else if (nbr < 0) {
		ft_putchar('-');
		nbr = -nbr;
	}

	while (nbr / power > 9)
		power *= 10;
	
	while (power > 0) {
		ft_putchar((nbr / power) % 10 + '0');
		power /= 10;
	}
}

void ft_putnbr(int nbr) {
	long num = nbr;
	int i;
	char buffer[12];

	if (num == 0) {
		ft_putchar('0');
		return;
	}

	if (num < 0) {
		ft_putchar('-');
		num = -num;
	}

	i = 0;
	while (num > 0) {
		buffer[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}

	while (i--)
		ft_putchar(buffer[i]);

}

/*int	main(void)
{
	write(1, "\nPrint a positive number: ", 27);
	ft_putnbr(42);
	write(1, "\nPrint a negative number: ", 26);
	ft_putnbr(-42);
	write(1, "\nPrint zero: ", 13);
	ft_putnbr(0);
	write(1, "\nPrint a number with zeros: ", 28);
        ft_putnbr(100);
	write(1, "\nPrint the max value of int: ", 29);
	ft_putnbr(2147483647);
	write(1, "\nPrint the min value of int: ", 29);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}*/
