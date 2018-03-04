/*
** my_strcmp.c for my_strcmp.c in /Users/prepan_l/Desktop/OctocatSVN/Lavan
** 
** Made by PREPANANTHA Lavan
** Login   <prepan_l@etna-alternance.net>
** 
** Started on  Mon Jan 18 13:59:30 2016 PREPANANTHA Lavan
** Last update Mon Jan 18 13:59:34 2016 PREPANANTHA Lavan
*/
#include "prototype.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (*(s1 + i) == *(s2 + i) && s1[i] != '\0')
    {
      i++;
    }
  if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
    {
      return (0);
    }
  else if (*(s1 + i) < *(s2 + i))
    {
      return (-1);
    }
  else
    {
      return (1);
    }
}
