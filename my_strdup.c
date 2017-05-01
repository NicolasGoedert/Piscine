/*
** my_strdup.c for my_strdup in /home/clement/Piscine/day08
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Last update Wed Oct 12 09:24:12 2016 clement girard
** Last update Wed Oct 12 11:28:12 2016 clement girard
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*cpy;
  int	len;

  len = my_strlen(src);
  cpy = (char*)malloc(sizeof(*src) * (len + 1));
  my_strcpy(cpy, src);
  return (cpy);
}
