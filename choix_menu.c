/*
** choix_menu.c for choix_menu.c in /Users/prepan_l/Desktop/OctocatSVN/Lavan
** 
** Made by PREPANANTHA Lavan
** Login   <prepan_l@etna-alternance.net>
** 
** Started on  Mon Jan 18 13:05:35 2016 PREPANANTHA Lavan
** Last update Mon Jan 18 13:05:48 2016 PREPANANTHA Lavan
*/

#include "prototype.h"
void choice_menu()
{
	my_putstr("\n\n\t\t\t\t  ► Choisissez une option : ");
	char letter;
	letter = getchar();
	clear_buffer();
	if (letter == 67 || letter == 99)
		choice_menucasu();
	else if (letter == 72 || letter == 104)
		choice_menuhard();
	else if (letter == 65 || letter == 97)
		aff_help();
	else if (letter == 81 || letter == 113)
		my_putstr("Vous quittez le jeu.\n");
	else
		my_putstr("\n\n\t\t\t       \e\0334\033[31mERREUR : Cet option n'existe pas.\033[0m\e\n");
}