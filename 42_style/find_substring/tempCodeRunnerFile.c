#include <stdio.h>

int checkPositiveNumber(char *string)
{
    int number;
    do {
        printf("%s", string);
        scanf("%d", &number);
    } while(number <= 0);
    return (number);
}

void invertedNumberPattern(int number)
{
    int i = number;
    while(i >= 1)
    {
        int j = 1;
        while(j <= i)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i--;
    }
}

int main(void)
{
    short number = checkPositiveNumber("Please Enter the number: ");
    invertedNumberPattern(number);
    return (0);
}