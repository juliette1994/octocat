/*
** aff_map.c for aff_map.c in /Users/prepan_l/Desktop/Octocat/Lavan
** 
** Made by PREPANANTHA Lavan
** Login   <prepan_l@etna-alternance.net>
** 
** Started on  Tue Jan 19 13:36:42 2016 PREPANANTHA Lavan
** Last update Tue Jan 19 13:36:44 2016 PREPANANTHA Lavan
*/
#include "prototype.h"

void	affiche_maps(char tab[taillel][taillec])
{
	for (int l = 0; l < taillel; l++)
	{
		my_putstr("\t\t\t\t       ");
		for (int c = 0; c < taillec; c++)
		{
			if (tab[l][c] == '#')
			{
				my_putstr("\e\0334\033[0;107;48;5;255m");
				my_putchar(tab[l][c]);
				my_putstr("\033[0m\e");
			}
			else if (tab[l][c] == ' ')
			{
				my_putstr("\e\0334\033[0;30;48;5;0m");
				my_putchar(tab[l][c]);
				my_putstr("\033[0m\e");
			}
			else if (tab[l][c] == 'X')
			{
				my_putstr("\e\0334\033[0;92;48;5;40m");
				my_putchar(tab[l][c]);
				my_putstr("\033[0m\e");
			}
			else
			{
				my_putstr("\e\0334\033[0;35;48;5;90m");
				my_putchar(tab[l][c]);
				my_putstr("\033[0m\e");
			}
		}
		my_putchar('\n');
	}
	my_putchar('\n');
}

void	affiche_hard_maps(char tab[taillebl][taillebc])
{
	for (int l = 0; l < taillebl; l++)
	{
		my_putstr("\t\t   ");
		for (int c = 0; c < taillebc; c++)
		{
			if (tab[l][c] == '#')
			{
				my_putstr("\e\0334\033[0;107;48;5;255m");
				my_putchar(tab[l][c]);
				my_putstr("\033[0m\e");
			}
			else if (tab[l][c] == ' ')
			{
				my_putstr("\e\0334\033[0;30;48;5;0m");
				my_putchar(tab[l][c]);
				my_putstr("\033[0m\e");
			}
			else if (tab[l][c] == 'X')
			{
				my_putstr("\e\0334\033[0;92;48;5;40m");
				my_putchar(tab[l][c]);
				my_putstr("\033[0m\e");
			}
			else
			{
				my_putstr("\e\0334\033[0;35;48;5;90m");
				my_putchar(tab[l][c]);
				my_putstr("\033[0m\e");
			}
		}
		my_putchar('\n');
	}
	my_putchar('\n');
}