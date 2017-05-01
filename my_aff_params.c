/*
** my_aff_params.c for my_aff_params in /home/clement/Piscine/CPool_Day07/task04
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Oct 11 09:46:42 2016 clement girard
** Last update Tue Oct 11 10:39:20 2016 clement girard
*/

void	my_aff_params(int ac, char **av)
{
  int	i;

  i = 0;
  while (i < ac)
    {
      my_putstr(av[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
