/*
** clear_buffer.c for clear_buffer.c in /Users/prepan_l/Desktop/Octocat
** 
** Made by PREPANANTHA Lavan
** Login   <prepan_l@etna-alternance.net>
** 
** Started on  Thu Jan 21 09:47:34 2016 PREPANANTHA Lavan
** Last update Thu Jan 21 09:47:35 2016 PREPANANTHA Lavan
*/
#include "prototype.h"

void	clear_buffer(void)
{    
  while (getchar() != '\n');
}
