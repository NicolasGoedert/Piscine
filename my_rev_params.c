/*
** my_rev_params.c for my_rev_params in /home/clement/Piscine/CPool_Day07
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Oct 11 10:41:13 2016 clement girard
** Last update Tue Oct 11 11:05:46 2016 clement girard
*/

void	my_rev_params(int ac, char **av)
{
  ac = ac - 1;
  while (ac >= 0)
    {
      my_putstr(av[ac]);
      my_putchar('\n');
      ac = ac - 1;
    }
}
