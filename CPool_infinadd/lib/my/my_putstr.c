/*
** my_putstr.c for my_putstr in /home/clement/Piscine/CPool_Day04
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Oct  6 09:41:13 2016 clement girard
** Last update Thu Oct  6 10:48:06 2016 clement girard
*/

void	my_putchar(char c);

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
