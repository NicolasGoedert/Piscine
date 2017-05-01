/*
** my_evil_str.c for my_evil_str in /home/clement/Piscine/CPool_Day04
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Oct  6 10:32:54 2016 clement girard
** Last update Fri Oct  7 17:34:36 2016 clement girard
*/

int	my_swap1(char *a, char *b)
{
  char	i;

  i = *a;
  *a = *b;
  *b = i;
}

char	*my_evil_str(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 1;
  while (str[i] != 0)
    i = i + 1;
  while (j <= i / 2)
    {
      my_swap1(&str[j - 1], &str[i - j]);
      j = j + 1;
    }
  return (str);
}
