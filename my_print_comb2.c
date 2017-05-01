/*
** my_print_comb2.c for my_print_comb2 in /home/clement/Piscine/CPool_Day03
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Oct  5 12:22:45 2016 clement girard
** Last update Thu Oct  6 22:39:53 2016 clement girard
*/

void	my_putchar(char c);

int	print_prog(int i, int j)
{
  int	first;
  int	second;

  first = '0' + i / 10;
  second = '0' + i % 10;
  my_putchar(first);
  my_putchar(second);
  my_putchar(' ');
  first = '0' + j / 10;
  second = '0' + j % 10;
  my_putchar(first);
  my_putchar(second);
  if (i != 98)
    {
      my_putchar(',');
      my_putchar(' ');
    }
  return (0);
}

int	my_print_comb2()
{
  int	i;
  int	j;

  i = 0;
  while (i <= 98)
    {
      j = 0;
      while (j <= 99)
	{
	  if (i < j)
	    print_prog(i, j);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}
