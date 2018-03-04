/*
** help.c for help.c in /Users/prepan_l/Desktop/Octocat
** 
** Made by PREPANANTHA Lavan
** Login   <prepan_l@etna-alternance.net>
** 
** Started on  Thu Jan 21 09:27:30 2016 PREPANANTHA Lavan
** Last update Thu Jan 21 09:27:31 2016 PREPANANTHA Lavan
*/
#include "prototype.h"

void retour_menu()
{
	clear_buffer();
	my_putstr("\n\n\t\t\t\t  ► Retourner au menu ? (o/n) : ");
	char letter;
	letter = getchar();
	if (letter == 'O' || letter == 'o')
	{
		clear_buffer();
		main();
	}
	else if (letter == 'N' || letter == 'n')
	{
		my_putstr("\033c");
		my_putstr("\n\n\t\t\t        \e\0334\033[34m   À bientôt sur Octocat!\033[0m\e\n\n\n");
	}
	else
		my_putstr("\n\n\t\t\t\t     \e\0334\033[31mCet option n'existe pas.\033[0m\e\n");
}

void aff_help()
{
	my_putstr("\033c");
	help_logo();
	my_putstr("\t\t\t       \e\0334\033[34m   (CECI N'EST PAS UN POULPE-CHAT.)\033[0m\e\n\n\n");
	my_putstr("\t\t\t\t \e\0334\033[41m◄ EN QUOI CONSISTE LE JEU OCTOCAT ?\033[0m\e\n");
	my_putstr(" Le jeu est un jeu de labyrinthe. Le joueur devra mener son personnage de l'entrée du labyrinthe jusqu'à la sortie. Ah oui.. Le nom du jeu étant Octocat... Bah logiquement et naturellement, vous allez donc contrôler un personnage qui sera un octocat! :D\n\n");
	my_putstr("\t\t\t\t\t \e\0334\033[41m◄ COMMENT Y JOUER ?\033[0m\e\n");
	my_putstr(" Notre jeu propose divers modes de jeu dont le mode Casu et le mode Hardcore. Dans ces modules de jeu seront implémentés des difficultés que vous devrez réaliser. Chaque mouvement vous rapportera 1pt. Vous devez terminer le labyrinthe. Le cas échéant, essayez d'avoir un maximum de points!\n\n");
	my_putstr("\t\t\t\t    \e\0334\033[42m○ LE MODE CASU ? C'est quoi ?\033[0m\e\n");
	my_putstr(" Le mode casu est un mode de jeu où le joueur effectue un déplacement par tour. A chaque tour, le joueur effectue une entrée et cela le fait se déplacer d'une case dans cette direction. Si l'Octocat rencontre et tape un mur, il est mort, et vous avez perdu.\n\n");
	my_putstr("\t\t\t\t       \e\0334\033[42m○ ET LE MODE HARDCORE ?\033[0m\e\n");
	my_putstr(" Le mode Hardcore est un mode de jeu où le joueur entre, sur l'entrée standard, tout le trajet qu'il veut effectuer en une seule fois. Celui-ci doit entrer l'itinéraire menant à la sortie sans rencontrer de mur sur le trajet. Si l'itinéraire ne mène pas jusqu'à la sortie, vous aurez perdu, c'est-à-dire que vous vous êtes fait mangés par un Grievers.\n\n");
	retour_menu();
}
