#ifndef QUIZ_H
# define QUIZ_H

# include <unistd.h>

int  ft_putchar(char c);
int  ft_putstr(char *s);
void  ft_putnbr(int n);
int  ft_strlen(char *s);
int  read_line(char *buffer, int size);

void show_menu(void);
void start_game(void);
int  ask_question(char *question, char **choices, char correct);

#endif
