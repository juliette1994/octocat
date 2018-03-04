#include "prototype.h"

void	choice_menuhard()
{
	my_putstr("\033c");
	logoc_dif();

	my_putstr("\t\t\t\t   _____________________________");
	my_putstr("\n\t\t\t\t  | \e\0334\033[41m - QUEL EST VOTRE CHOIX ? -\033[0m\e  | \n");
	my_putstr("\t\t\t\t  |   \e\0334\033[42m[1]\033[0m\e - Mode Facile          |\n");
	my_putstr("\t\t\t\t  |   \e\0334\033[42m[2]\033[0m\e - Mode difficile       |\n");
	my_putstr("\t\t\t\t  |_____________________________|\n");
	my_putstr("\n\t\t\t\t    ► Choisissez une option : ");

	char choice2;

	choice2 = getchar();
	if (choice2 == '1')
		choix_easyh_maps();
	else if (choice2 == '2')
		choix_hardh_maps();
	else
		my_putstr("\n\n\t\t\t       \e\0334\033[31mERREUR : Cet option est indisponible.\033[0m\e\n");
}