#include "quiz.h"

void start_game(void)
{
    char buffer[2];
    do
    {
        char *questions[] = {"\nWhat is the capital of France?","How many days in a week?","What is 2 + 2?"};
        char *choices[][3] = {{"Paris", "London", "Madrid"},{"5", "7", "8"},{"3", "4", "5"}};
        char correct_answers[] = {'a', 'b', 'b'};
        int score = 0;
        int total = 3;
        int i = 0;
        while(i < total)
        {
            if (ask_question(questions[i], choices[i], correct_answers[i]))
            {
                score++;
            }
            i++;
        }
        ft_putstr("Final score: ");
        ft_putnbr(score);
	ft_putstr(" of 3");
        ft_putchar('\n');
	ft_putstr("☆☆☆☆☆ END GAME ☆☆☆☆☆\n\n");
        ft_putstr("Do you want to replay? (y/n): ");
        read_line(buffer, 2);
    } while(buffer[0] != 'n' && buffer[0] != 'N');

}

