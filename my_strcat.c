/*
** my_strcat.c for my_strcat in /home/clement/Piscine/CPool_Day07/lib/my
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Oct 11 09:19:45 2016 clement girard
** Last update Wed Oct 12 14:46:20 2016 clement girard
*/

#include <stdlib.h>

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  while (dest[i] != '\0')
    i = i + 1;
  j = 0;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}
