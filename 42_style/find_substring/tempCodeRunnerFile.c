#include <stdio.h>

int ft_strcmp(char *str1, char *str2)
{
    int i = 0;
    while(str1[i])
    {
        if(str1[i] != str2[i])
            break;
        i++;
    }
    if(!str2[i])
        return (1);
    return (0);
}

char password(char *message, char *pwd)
{
    printf("%s", message);
    scanf("%3s", &pwd);     // "%3s" for read just 3 letters
    return (pwd);
}

void guessPassword(char *pwd)
{
    char trail[4];
    int i = 'A';
    while(i <= 'A')
    {
        int j = 'A';
        while(j <= 'Z')
        {
            int k = 'A';
            while(k <= 'Z')
            {
                trail[0] = i;
                trail[1] = j;
                trail[2] = k;
                trail[3] = '\0';
                if(ft_strcmp(trail, pwd))
                    printf("Password is: %s\n", trail);
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    char pwd[4];
    password("Pleas enter your password (3-Letters UPPER): ", pwd);
    guessPassword(pwd);
    return (0);
}