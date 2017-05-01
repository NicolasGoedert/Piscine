/*
** multi.c for multiplication in /home/nicolas94200/infin-add
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Fri Nov  4 13:03:31 2016 goedert nicolas
** Last update Fri Nov  4 16:04:53 2016 goedert nicolas
*/

#include <stdlib.h>

int	my_multinf(char *s1, char *s2)
{
  int	max;
  int	resetmax;
  int	premax;
  int	ret;
  int	mult;
  char	*result;
  char	*tmp;
  char	*retenue;

  max = my_strlen(s1) + my_strlen(s2);
  resetmax = max;
  premax = max;
  ret = 0;
  mult = 1;
  result = malloc(sizeof(char) * (max + 1));
  tmp = malloc(sizeof(char) * (max + 1));
  retenue = malloc(sizeof(char) * (max + 1));
  while (premax > 0)
    {
      max = resetmax;
      while (max > 0)
	{
	  result[max] = s1[max] * s2[premax];
	  tmp[max] = result[max] + (result[max] * mult) + ret;
      if (result[max] > 9)
	    {
	      ret = result[max] / 10;
	      result[max] = result[max] % 10;
	      if (premax == 0)
		retenue[max] = ret;
	    }
	  max = max - 1;
	}
      premax = premax - 1;
      mult = mult * 10;
      result[max] = result[max] + 48;
    }
  my_strcat(retenue, result);
  my_putstr(retenue);
  my_putchar('\n');
  return (0);
}

int	main(int ac, char **av)
{
  char	*s1;
  char	*s2;

  s1 = malloc(sizeof(*av[1]) * (my_strlen(av[1]) + 3));
  s2 = malloc(sizeof(*av[2]) * (my_strlen(av[2]) + 3));
  my_strcpy(s1, av[1]);
  my_strcpy(s2, av[2]);
  my_multinf(s1, s2);
}
