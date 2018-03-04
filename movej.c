/*
** movej.c for movej.c in /Users/prepan_l/Desktop/Octocat/Lavan
** 
** Made by PREPANANTHA Lavan
** Login   <prepan_l@etna-alternance.net>
** 
** Started on  Tue Jan 19 13:37:22 2016 PREPANANTHA Lavan
** Last update Tue Jan 19 13:37:25 2016 PREPANANTHA Lavan
*/
#include "prototype.h"
char  choix_move()
{
  char  move;

  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[D] \033[0m\e - \0334\033[32mDROITE\033[0m\e\n");
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[A] \033[0m\e - \0334\033[32mGAUCHE\033[0m\e\n");
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[W] \033[0m\e - \0334\033[32mHAUT\033[0m\e\n");
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[S] \033[0m\e - \0334\033[32mBAS\033[0m\e\n");
  my_putstr(" \n\n\t\t\t         ► Choisissez votre déplacement : ");
  clear_buffer();
  move = getchar();
  return (move);
}
/*
char  choix_moveh()
{
  char  line[MAX_LINE];
  int   line_length = 0;
  char  c;

  while ((c = getchar()) != EOF && line_length < MAX_LINE)
  {
    line[line_length] = c;
    line_length++;
  }
  line[line_length] = 0;
  return (line);
}
  char  *initial; 
  char  *move;
  char  i;

  initial = (char*)malloc(200*sizeof(char));
  move = initial;
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[D] \033[0m\e - \0334\033[32mDROITE\033[0m\e\n");
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[A] \033[0m\e - \0334\033[32mGAUCHE\033[0m\e\n");
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[W] \033[0m\e - \0334\033[32mHAUT\033[0m\e\n");
  my_putstr(" \t\t\t\t\t   \e\0334\033[33m[S] \033[0m\e - \0334\033[32mBAS\033[0m\e\n");
  my_putstr(" \n\n\t\t\t         ► Choisissez votre déplacement : ");
  //my_putstr("Seg?\n");
  clear_buffer();
  i = getchar();
  my_putstr("getchar i\n");
  system("read -p \"getchar end\" -rsn1");
  while (i != '\n')
  {
    *initial = i;
    initial++;
    i = getchar();
  }
  //my_putstr("after while\n");
  *initial = '\0';
  return (*move);
}

*/







int choixhard_commandex(int bougex, char bouge)
{
  int depl;

  depl = 0;
  if (bouge == 'd' || bouge == 'D')
    bougex = bougex + 1;
  else if (bouge == 'A' || bouge == 'a')
    bougex = bougex - 1;
  else if (bouge == 'w' || bouge == 'W')
    bougex = bougex + 0;
  else if (bouge == 's' || bouge == 'S')
    bougex = bougex + 0;
  else
    my_putstr("Ce déplacement n'existe pas.\n");
  return (bougex);
}

int choixhard_commandey(int bougey, char bouge)
{
  if (bouge == 'd' || bouge == 'D')
    bougey = bougey + 0;
  else if (bouge == 'A' || bouge == 'a')
    bougey = bougey + 0;
  else if (bouge == 'W' || bouge == 'w')
    bougey = bougey - 1;
  else if (bouge == 'S' || bouge == 's')
    bougey = bougey + 1;
  else
    my_putstr("Ce déplacement n'existe pas.\n");
  return (bougey);
}

















int choix_commandex(int bougex, char bouge)
{
  int depl;

  depl = 0;
  if (bouge == 'd' || bouge == 'D')
  {
    bougex = bougex + 1;
    //++depl;
  }
  else if (bouge == 'A' || bouge == 'a')
  {
    bougex = bougex - 1;
    //++depl;
  }
  else if (bouge == 'w' || bouge == 'W')
  {
    bougex = bougex + 0;
    //++depl;
  }
  else if (bouge == 's' || bouge == 'S')
  {
    bougex = bougex + 0;
    //++depl;
  }
  else
    my_putstr("Ce déplacement n'existe pas.\n");
  return (bougex);
/*  my_putstr("Vous avez effectué"); 
  my_putstr();
  my_putstr("déplacements.\n");*/
}

int choix_commandey(int bougey, char bouge)
{
  if (bouge == 'd' || bouge == 'D')
    bougey = bougey + 0;
  else if (bouge == 'A' || bouge == 'a')
    bougey = bougey + 0;
  else if (bouge == 'W' || bouge == 'w')
    bougey = bougey - 1;
  else if (bouge == 'S' || bouge == 's')
    bougey = bougey + 1;
  else
    my_putstr("Ce déplacement n'existe pas.\n");
  return (bougey);
}