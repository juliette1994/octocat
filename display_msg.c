#include "prototype.h"
 
void  disp_msgwin()
{
      my_putstr("\n\t\t\t\t\t \\|/ ____ \\|/       \n");
      my_putstr("\t\t\t\t\t  @~/ ,. \\~@        \n");
      my_putstr("\t\t\t\t\t /_(  __ )_\\       \n");
      my_putstr("\t\t\t\t\t    \\__U_/     \n");
      my_putstr("\n\t\t\t          \e\0334\033[42mFélicitation, vous avez gagné!\033[0m\e\n");
      retour_menu();
}
 
void  disp_msgfail()
{
      my_putstr("\n\t\t\t\t\t \\|/ ____ \\|/       \n");
      my_putstr("\t\t\t\t\t  @~/ ,. \\~@        \n");
      my_putstr("\t\t\t\t\t /_(  \\__/ )_\\       \n");
      my_putstr("\t\t\t\t\t    \\__U_/     \n");
      my_putstr("\n\t\t\t      \e\0334\033[41mOh mince, vous vous êtes pris un mur!\033[0m\e\n");
      retour_menu();
}

void  disp_msgfailh()
{
      my_putstr("\n\t\t\t\t\t   \\|/ ____ \\|/       \n");
      my_putstr("\t\t\t\t\t    @~/ ,. \\~@        \n");
      my_putstr("\t\t\t\t\t   /_(  \\__/ )_\\       \n");
      my_putstr("\t\t\t\t\t      \\__U_/     \n");
      my_putstr("\n\t\t\t         \e\0334\033[41mOh mince, vous vous êtes perdus!\033[0m\e\n");
      retour_menu();
}
