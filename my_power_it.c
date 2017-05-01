/*
** my_power_it.c for my_power_it in /home/clement/Piscine
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Oct  7 09:42:37 2016 clement girard
** Last update Fri Oct  7 09:59:12 2016 clement girard
*/

int	my_power_it(int nb, int p)
{
  int	result;

  result = 1;
  if (p < 0)
    return (0);
  if (p == 0)
    return (1);
  while (p > 0)
    {
      result = result * nb;
      p = p - 1;
    }
  return (result);
}
