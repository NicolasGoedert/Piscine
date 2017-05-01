/*
** my_print_alpha.c for my_print_alpha in /home/clement/Piscine/CPool_Day03
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Oct  5 09:23:32 2016 clement girard
** Last update Thu Oct  6 09:52:32 2016 clement girard
*/

void	my_putchar(char c);

int	my_print_alpha()
{
  char	i;

  i = 'a';
  while (i <= 'z')
    {
      my_putchar(i);
      i = i + 1;
    }
  return (0);
}
