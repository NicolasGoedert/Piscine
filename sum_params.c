/*
** my_sum_params.c for my_sum_params in /home/clement/Piscine/CPool_Day08/task02
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Oct 12 09:26:15 2016 clement girard
** Last update Thu Oct 13 10:48:31 2016 clement girard
*/

#include <stdlib.h>

char	*sum_params(int argc, char **argv)
{
  int	i;
  char	*concat;
  int	len;

  len = 0;
  i = 0;
  while (i < argc)
    {
      len = len + my_strlen(argv[i]);
      i = i + 1;
    }
  if (((concat = malloc(sizeof(concat) * (len + 1))) == NULL))
    return (NULL);
  i = 0;
  while (i < argc)
    {
      my_strcat(concat, argv[i]);
      if (i < argc - 1)
	my_strcat(concat, "\n");
      i = i + 1;
    }
  return (concat);
}
