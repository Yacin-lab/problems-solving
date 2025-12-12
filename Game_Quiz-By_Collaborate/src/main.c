#include "quiz.h"

int main (void)
{
	char buffer[4];

	while (1)
	{
		show_menu();
		ft_putstr("\nChoose an option: ");
		read_line(buffer, 4);

		if (buffer[0] == '1')
			start_game();
		else if (buffer[0] == '2')
		{
			ft_putstr("\nGoodbye!\n");
			return (0);
		}
		else
			ft_putstr("\nInvalid choice. Try again.\n\n");
	}
}
