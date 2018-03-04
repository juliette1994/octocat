#ifndef __PROTOTYPE_H__
# define __PROTOTYPE_H__

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#define taillel 10
#define taillec 20
#define taillebl 30
#define taillebc 60
#define MAX_LINE 500

/*-------------- PISCINE C -----------------*/

void	my_putchar(char c);
void	my_putstr(char *str);
int		my_strcmp(char *s1, char *s2);

/*-------------- PROJET -----------------*/
void	choice_menu();
void	affiche_maps(char tab[taillel][taillec]);
void	choix_easyc_maps();
void    create_mapb1(int jx, int jy);
void	create_mapb2(int jx, int jy);
void	create_mapb3(int jx, int jy);
void	choix_commande();
void	aff_help();
int		choix_commandex(int bougex, char bouge);
int		choix_commandey(int bougey, char bouge);
char	choix_move();
//char	choix_moveh();
void 	move_map1_casu(char tab[taillel][taillec], int jy, int jx, char bouge);
void 	move_mapb1_casu(char tab[taillebl][taillebc], int jy, int jx, char bouge);
void 	move_map1_hard(char tab[taillel][taillec], int jy, int jx);//, char *bouge);
void 	move_mapb1_hard(char tab[taillebl][taillebc], int jy, int jx);//, char *bouge);
int		main();
void	aff_logocasu();
void	create_map1(int jx, int jy);
void	create_map2(int jx, int jy);
void	create_map3(int jx, int jy);
void 	choice_menucasu();
void	choice_menuhard();
void	choix_hardc_maps();
void	create_hard_mapb1(int jx, int jy);
void	create_hard_mapb2(int jx, int jy);
void	create_hard_mapb3(int jx, int jy);
void	choice_menuh();
void	affiche_hard_maps(char tab[taillebl][taillebc]);
void	choix_hardh_maps();
void	clear_buffer(void);
void	choix_easyh_maps();
void	create_hard_map1(int jx, int jy);
void	create_hard_map2(int jx, int jy);
void	create_hard_map3(int jx, int jy);
void	disp_msgwin();
void	disp_msgfail();
void	replay_msg();
void	retour_menu();
int   	choixhard_commandex(int bougex, char bouge);
int  	choixhard_commandey(int bougex, char bouge);
void	disp_msgfailh();
void	aide();

/* --------- AFFICHAGE LOGO --------- */
void	welcome_msg();
void	logoc_easy();
void	logoc_dif();
void	casu_int();
void	help_logo();

#endif
