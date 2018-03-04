/*
** maps.c for maps.c in /Users/prepan_l/Desktop/Octocat/Lavan
** 
** Made by PREPANANTHA Lavan
** Login   <prepan_l@etna-alternance.net>
** 
** Started on  Tue Jan 19 13:37:09 2016 PREPANANTHA Lavan
** Last update Tue Jan 19 13:37:10 2016 PREPANANTHA Lavan
*/

#include "prototype.h"

void  create_map1(int jx, int jy) {
  static char tab[taillel][taillec] = {{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
				       {' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#'},
				       {'#',' ',' ',' ','#',' ',' ',' ','#','#','#',' ','#',' ','#','#','#','#','#','#'},
				       {'#',' ','#',' ',' ','#','#',' ',' ',' ','#',' ','#',' ','#',' ',' ',' ',' ','#'},
				       {'#',' ','#',' ','#',' ',' ',' ','#','#','#',' ',' ',' ','#',' ','#','#','#','#'},
				       {'#',' ','#',' ',' ',' ','#',' ',' ','#','#','#','#','#','#',' ','#','#',' ','X'},
				       {'#',' ',' ',' ','#',' ','#',' ','#','#',' ',' ',' ','#',' ',' ',' ','#',' ','#'},
				       {'#','#','#',' ',' ',' ','#',' ',' ',' ',' ','#',' ','#',' ','#',' ',' ',' ','#'},
				       {'#',' ',' ',' ','#',' ',' ',' ','#','#','#','#',' ',' ',' ',' ','#',' ',' ','#'},
				       {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}};
  char	bouge;

  bouge = ' ';
  tab[jy][jx] = 'j';
  affiche_maps(tab);
  tab[jy][jx] = ' ';
  move_map1_casu(tab, jy, jx, bouge);
}

void  create_map2(int jx, int jy) {
  static char tab1[taillel][taillec] = {{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
					{' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#'},
					{'#','#','#',' ',' ',' ','#','#','#',' ','#','#','#','#',' ','#',' ','#',' ','#'},
					{'#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#','#','#',' ','#'},
					{'#',' ','#','#','#','#','#',' ','#','#','#','#',' ','#',' ',' ',' ','#',' ','X'},
					{'#',' ',' ',' ',' ',' ',' ',' ','#','#','#','#',' ','#','#','#',' ','#',' ','#'},
					{'#',' ','#',' ','#',' ','#',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#',' ','#'},
					{'#',' ','#',' ','#',' ','#',' ','#','#',' ','#','#','#',' ','#',' ','#',' ','#'},
					{'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#'},
					{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}};
  char	bouge;

  bouge = ' ';
  tab1[jy][jx] = 'j';
  affiche_maps(tab1);
  tab1[jy][jx] = ' ';
  move_map1_casu(tab1, jy, jx, bouge);                
}

void  create_map3(int jx, int jy) {
  static char tab2[taillel][taillec] =  {{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','X','#'},
					 {' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
					 {'#','#','#',' ','#',' ','#','#','#','#',' ','#','#','#',' ','#',' ','#',' ','#'},
					 {'#',' ',' ',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#','#','#',' ','#'},
					 {'#',' ','#','#','#','#','#',' ','#','#','#','#',' ','#',' ',' ',' ','#',' ','#'},
					 {'#',' ','#',' ',' ',' ','#',' ','#','#','#','#',' ','#','#','#',' ','#',' ','#'},
					 {'#',' ','#',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ','#'},
					 {'#',' ','#',' ','#',' ','#',' ','#','#',' ','#','#','#',' ','#',' ','#',' ','#'},
					 {'#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ','#'},
					 {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}};
  char	bouge;

  bouge = ' ';
  tab2[jy][jx] = 'j';
  affiche_maps(tab2);
  tab2[jy][jx] = ' ';
  move_map1_casu(tab2, jy, jx, bouge);              
}
