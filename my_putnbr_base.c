/*
** my_putnbr_base.c for my_putnbr_base in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 15:36:31 2016 clement girard
** Last update Tue Oct 11 10:54:11 2016 clement girard
*/

int	my_getsize(char *str)
{
  int	j;

  j = 0;
  while (str[j])
    j = j + 1;
  return (j);
}

int	my_putnbr_base(int nbr, char *base)
{
  unsigned int	i;

  i = my_getsize(base);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  if (nbr >= i)
    {
      my_putnbr_base(nbr / i, base);
      my_putnbr_base(nbr % i, base);
    }
  else
    my_putchar(base[nbr]);
}
