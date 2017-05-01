/*
** my_print_digits.c for my_print_digits in /home/clement/Piscine/CPool_Day03
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Oct  5 09:40:40 2016 clement girard
** Last update Thu Oct  6 09:53:20 2016 clement girard
*/

void	my_putchar(char c);

int	my_print_digits()
{
  char	i;

  i = '0';
  while (i <= '9')
    {
      my_putchar(i);
      i = i + 1;
    }
  return (0);
}
