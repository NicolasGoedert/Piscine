/*
** my_fact_rec.c for my_fact_rec in /home/clement/Piscine
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Oct  7 09:32:11 2016 clement girard
** Last update Fri Oct  7 09:42:14 2016 clement girard
*/

int	my_fact_rec(int nb)
{
  if (nb == 0 || nb == 1)
    return (1);
  if (nb < 0 || nb >= 13)
    return (0);
  else
    nb = nb * my_fact_rec(nb - 1);
  return (nb);
}
