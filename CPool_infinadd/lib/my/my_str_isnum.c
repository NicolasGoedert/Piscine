/*
** my_str_isnum.c for my_str_isnum in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 12:11:58 2016 clement girard
** Last update Mon Oct 24 12:26:56 2016 clement girard
*/

int	my_str_isnum(char *str)
{
  int	i;
  int	result;

  i = 0;
  result = 1;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	i = i + 1;
      else
	return (0);
    }
  return (result);
}
