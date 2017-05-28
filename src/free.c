/*
** free.c for  in /home/romain.pillot/projects/ghoulc/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Sun May 28 03:15:41 2017 romain pillot
** Last update Sun May 28 03:30:30 2017 romain pillot
*/

#include <stdlib.h>

void	safe_free(void **ptr)
{
  if (ptr && *ptr)
    {
      free(*ptr);
      *ptr = NULL;
    }
}

void	tab_free(void ***ptr)
{
  if (ptr && *ptr)
    {
      if (**ptr)
	free(**ptr);
      free(*ptr);
      *ptr = NULL;
    }
}
