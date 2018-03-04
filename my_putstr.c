/*
** my_putstr.c for my_putstr.c in /Users/prepan_l/Desktop/OctocatSVN/Lavan
** 
** Made by PREPANANTHA Lavan
** Login   <prepan_l@etna-alternance.net>
** 
** Started on  Mon Jan 18 11:36:03 2016 PREPANANTHA Lavan
** Last update Mon Jan 18 11:36:09 2016 PREPANANTHA Lavan
*/

#include "prototype.h"

void	my_putchar(char c);
void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      i = i + 1;
    }
}
