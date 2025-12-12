#include "quiz.h"

int ask_question(char *question, char **choices, char correct) 
{
char answer[100]; 
int i;

    ft_putstr(question);
    ft_putstr("\n");

    i = 0;
    while (i < 3 && choices[i])
    {
        if (i == 0)
            ft_putstr("a) ");
        else if (i == 1)
            ft_putstr("b) ");
        else if (i == 2)
            ft_putstr("c) ");
        ft_putstr(choices[i]);
        ft_putstr("\n");
        i++;
    }
    ft_putstr("Your answer: ");
    read_line(answer, 100);

    if (answer[0] == correct)
    {
        ft_putstr("Correct!\n\n");
        return (1);
    }
    ft_putstr("Wrong!\n\n");
    return (0);

}
