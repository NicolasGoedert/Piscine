/*
** my_print_combn.c for my_print_combn in /home/clement/Piscine/CPool_Day03
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Oct  5 22:10:56 2016 clement girard
** Last update Thu Oct  6 22:44:06 2016 clement girard
*/

void	my_putchar(char c);

int	print_putchar1(int i, int j, int k)
{
  my_putchar(i);
  my_putchar(j);
  my_putchar(k);
  return (0);
}

int	quote_spaces2(int a, int b)
{
  my_putchar(a);
  my_putchar(b);
  return (0);
}

int	my_print_combn(int n)
{
  int	i;
  int	j;
  int	k;
  int	l;

  l = 0;
  i = '0';
  while (i <= '7' && l < n)
    {
      j = i + 1;
      while (j <= '8' && l < n)
	{
	  k = j + 1;
	  while (k <= '9' && l < n)
	    {
	      print_putchar1(i, j, k);
	      l = l + 1;
	      if (l < n)
		quote_spaces2(',', ' ');
	      k = k + 1;
	    }
	  j = j + 1;
	}
      i = i + 1;
    }
}
