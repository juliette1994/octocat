/*
** modecasu.c for modecasu.c in /Users/prepan_l/Desktop/Octocat
** 
** Made by PREPANANTHA Lavan
** Login   <prepan_l@etna-alternance.net>
** 
** Started on  Thu Jan 21 09:47:53 2016 PREPANANTHA Lavan
** Last update Thu Jan 21 09:47:59 2016 PREPANANTHA Lavan
*/
#include "prototype.h"

void choice_menucasu()
{
	my_putstr("\033c");
	casu_int();

	my_putstr("\t\t\t\t   _____________________________");
	my_putstr("\n\t\t\t\t  | \e\0334\033[41m - QUEL EST VOTRE CHOIX ? -\033[0m\e  | \n");
	my_putstr("\t\t\t\t  |   \e\0334\033[42m[1]\033[0m\e - Mode Facile          |\n");
	my_putstr("\t\t\t\t  |   \e\0334\033[42m[2]\033[0m\e - Mode difficile       |\n");
	my_putstr("\t\t\t\t  |_____________________________|\n");
	my_putstr("\n\t\t\t\t    ► Choisissez une option : ");

	char choice2;

	choice2 = getchar();
	if (choice2 == '1')
		choix_easyc_maps();
	else if (choice2 == '2')
		choix_hardc_maps();
	else
		my_putstr("\n\n\t\t\t       \e\0334\033[31mERREUR : Cet option est indisponible.\033[0m\e\n");
}
