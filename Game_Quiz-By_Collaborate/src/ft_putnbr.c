#include "quiz.h"

void	ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        if (n == -2147483648)
        {
            write(1, "2147483648", 10);
            return;
        }
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar((n % 10) + '0');
}
