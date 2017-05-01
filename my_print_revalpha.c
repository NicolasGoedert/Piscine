/*
** my_print_revalpha.c for my_print_revalpha in /home/clement/Piscine/CPool_Day03
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Oct  5 09:32:11 2016 clement girard
** Last update Thu Oct  6 09:53:01 2016 clement girard
*/

void	my_putchar(char c);

int	my_print_revalpha()
{
  char	i;

  i = 'z';
  while (i >= 'a')
    {
      my_putchar(i);
      i = i - 1;
    }
  return (0);
}
