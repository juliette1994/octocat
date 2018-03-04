/*
** choix_maps.c for choix_maps.c in /Users/prepan_l/Desktop/Octocat/Lavan
** 
** Made by PREPANANTHA Lavan
** Login   <prepan_l@etna-alternance.net>
** 
** Started on  Tue Jan 19 13:36:56 2016 PREPANANTHA Lavan
** Last update Tue Jan 19 13:36:58 2016 PREPANANTHA Lavan
*/
#include "prototype.h"

/* ========================= DEBUT : AFFICHAGE MAP MODE CASU ========================= */
void choix_hardc_maps()
{
  my_putstr("\033c");
  logoc_dif();
  srand(time(NULL));
  int map;
  map = (rand() % 3) + 1;
  if (map == 1)
    create_mapb1(0, 1);
  else if (map == 2)
    create_mapb2(0, 1);
  else if (map == 3)
    create_mapb3(0, 1);
}


void choix_easyc_maps()
{
  my_putstr("\033c");
  logoc_easy();
  srand(time(NULL));
  int map;
  map = (rand() % 3) + 1;
  if (map == 1)
    create_map1(0, 1);
  else if (map == 2)
    create_map2(0, 1);
  else if (map == 3)
    create_map3(0, 1);
}

/* ========================= FIN : AFFICHAGE MAP MODE CASU ========================= */

/* ========================= DEBUT : AFFICHAGE MAP MODE HARDCORE ========================= */

void choix_easyh_maps()
{
  my_putstr("\033c");
  logoc_dif();
  srand(time(NULL));
  int map;
  map = (rand() % 3) + 1;
  if (map == 1)
    create_hard_map1(0, 1);
  else if (map == 2)
    create_hard_map2(0, 1);
  else if (map == 3)
    create_hard_map3(0, 1);
}

void choix_hardh_maps()
{
  my_putstr("\033c");
  logoc_dif();
  srand(time(NULL));
  int map;
  map = (rand() % 3) + 1;
  if (map == 1)
    create_hard_mapb1(0, 1);
  else if (map == 2)
    create_hard_mapb2(0, 1);
  else if (map == 3)
    create_hard_mapb3(0, 1);
}

/* ========================= FIN : AFFICHAGE MAP MODE HARDCORE ========================= */

/* ========================= DEBUT : AFFICHAGE MAP QD MOUVEMENT CASU ========================= */
void  move_map1_casu(char tab[taillel][taillec], int jy, int jx, char bouge)
{
  while (tab[jy][jx] != '#' && tab[jy][jx] != 'X')
  {
    bouge = choix_move();
    jy = choix_commandey(jy, bouge);
    jx = choix_commandex(jx, bouge);
    my_putstr("\033c");
    logoc_easy();
    if (tab[jy][jx] == ' ')
    {
      tab[jy][jx] = 'j';
      affiche_maps(tab);
      tab[jy][jx] = ' ';
    }
    else if (tab[jy][jx] == '#')
      disp_msgfail();
    else if (tab[jy][jx] == 'X')
      disp_msgwin();
  }
}
void  move_mapb1_casu(char tab[taillebl][taillebc], int jy, int jx, char bouge)
{
  while (tab[jy][jx] != '#' && tab[jy][jx] != 'X')
  {
    bouge = choix_move();
    jy = choix_commandey(jy, bouge);
    jx = choix_commandex(jx, bouge);
    my_putstr("\033c");
    logoc_dif();
    if (tab[jy][jx] == ' ')
    {
      tab[jy][jx] = 'j';
      affiche_hard_maps(tab);
      tab[jy][jx] = ' ';
    }
    else if (tab[jy][jx] == '#')
      disp_msgfail();
    else if (tab[jy][jx] == 'X')
      disp_msgwin();
  }
}
 
/* ========================= FIN : AFFICHAGE MAP QD MOUVEMENT CASU ========================= */

void  aide()
{
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[D] \033[0m\e - \0334\033[32mDROITE\033[0m\e\n");
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[A] \033[0m\e - \0334\033[32mGAUCHE\033[0m\e\n");
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[W] \033[0m\e - \0334\033[32mHAUT\033[0m\e\n");
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[S] \033[0m\e - \0334\033[32mBAS\033[0m\e\n");
  my_putstr(" \n\n\t\t\t         ► Choisissez votre déplacement : ");
}

/* ========================= DEBUT : AFFICHAGE MAP QD MOUVEMENT HARDCORE ========================= */
void  move_map1_hard(char tab[taillel][taillec], int jy, int jx)//, char *bouge)
{
  int i;
  int bye = 0;

  i = 0;
  char  line[MAX_LINE];
  char  c;

  aide();
  clear_buffer();
  c = getchar();
  while (bye == 0 && c != EOF && c != '\n')
  {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  i = 0;
  while (line[i] && bye != 1)
  {
    jy = choixhard_commandey(jy, line[i]);
    jx = choixhard_commandex(jx, line[i]);
    my_putstr("\033c");
    logoc_easy();
    if (tab[jy][jx] == '#' || tab[jy][jx] == ' ')
    {
      disp_msgfailh();
      bye = 1;
    }
    else if (tab[jy][jx] == 'X')
    {
      disp_msgwin();
      bye = 1;
    }
    i++;
  }
}
void  move_mapb1_hard(char tab[taillebl][taillebc], int jy, int jx)//, char *bouge)
{
  int i;
  int bye = 0;

  i = 0;
  char  line[MAX_LINE];
  char  c;

  aide();
  clear_buffer();
  c = getchar();
  while (bye == 0 && c != EOF && c != '\n')
  {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  i = 0;
  while (line[i] && bye != 1)
  {
    jy = choixhard_commandey(jy, line[i]);
    jx = choixhard_commandex(jx, line[i]);
    my_putstr("\033c");
    logoc_dif();
    if (tab[jy][jx] == '#' || tab[jy][jx] == ' ')
    {
      disp_msgfailh();
      bye = 1;
    }
    else if (tab[jy][jx] == 'X')
    {
      disp_msgwin();
      bye = 1;
    }
    i++;
  }
}
 
/* ========================= FIN : AFFICHAGE MAP QD MOUVEMENT HARDCORE ========================= */


