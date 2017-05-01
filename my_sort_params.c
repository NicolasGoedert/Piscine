/*
** my_sort_params.c for my_sort_params in /home/clement/Piscine/CPool_Day07/task06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Oct 11 11:10:57 2016 clement girard
** Last update Fri Feb 10 14:19:09 2017 goedert nicolas
*/

int	my_writeprog(char **av, int k)
{
  k = 0;
  while (av[k])
    {
      my_putstr(av[k]);
      my_putchar('\n');
      k = k + 1;
    }
  return (0);
}

void	my_sort_params(int ac, char **av)
{
  int	k;
  int	count;
  char	*stock;

  count = 0;
  while (count < ac)
    {
      k = 0;
      while (k < ac - 1)
	{
	  if (my_strcmp(av[k], av[k + 1]) > 0)
	    {
	      stock = av[k + 1];
	      av[k + 1] = av[k];
	      av[k] = stock;
	    }
	  k = k + 1;
	}
      count = count + 1;
    }
  my_writeprog(av, k);
}
