/*
** main.c for main in /home/clement/Piscine/CPool_infinadd/prog
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 24 10:00:45 2016 clement girard
** Last update Wed Oct 26 13:38:32 2016 clement girard
*/

# include "my.h"
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	my_puterror(char c)
{
  write(2, &c, 1);
}

int	my_strerror(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_puterror(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_customstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	infin_add(char *s1, char *s2)
{
  int	i;
  int	j;
  int	k;
  int	m;
  int	n;
  int	l;
  char	*result;
  char	*zero;
  char	*s3;

  j = 0;
  l = 0;
  m = my_strlen(s1);
  n = my_strlen(s2);
  if (m < n)
    k = n - m;
  else
    k = m - n;
  //my_put_nbr(k);
  //my_putchar('\n');
  if ((zero = malloc(sizeof(char) * (k + 3))) == 0)
    return (0);
  while (s1[m] && s2[n])
    {
      if (m <= n)
	{
	  if ((result = malloc(sizeof(char) * (n + 3))) == 0)
	    return (0);
	  if ((s3 = malloc(sizeof(char) * (k + m))) == 0)
	    return (0);
	  i = my_strlen(s3);
	  if (s1[m])
	    {
	      s3[i] = s2[n];
	    }
	  //my_put_nbr(my_strlen(zero));
	  //my_putchar('\n');
	  result[i] = (s3[i] - '0') + (s2[n] - '0');
	  if (result[i] > '9')
	    {
	      result[i] = (result[i] - '0') - 10;
	      result[i - 1] = result[i - 1] + 1;	  
	    }
	}
      if (n <= m)
	{
	  if ((result = malloc(sizeof(char) * (m + 3))) == 0)
	    return (0);
 	  if ((s3 = malloc(sizeof(char) * (k + n))) == 0)
	    return (0);
	  i = my_strlen(s3);
	  if (s2[n])
	    s3[i] = s1[m];
	  //my_put_nbr(i);
	  //my_putchar('\n');
	  result[i] = (s1[m] - '0') + (s3[i] - '0');
	  if (result[i] > '9')
	    {
	      result[i] = (result[i] - '0') - 10;
	      result[i - 1] = result[i - 1] + 1;
	    }
	}
      m = m - 1;
      n = n - 1;
      i = i - 1;
      j = j + 1;
    }
  my_customstr(result);
  return (0);
}

int	my_error(char *s1, char *s2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  if ((my_str_isnum(s1) == 0) || (my_str_isnum(s2) == 0))
    {
      my_strerror("Put only digits");
      return (84);
    }
  return (0);
}

int	main(int ac, char **av)
{
  char	*s1;
  char	*s2;

  if (ac != 3)
    {
      my_strerror("Not enough or too many arguments");
      return (84);
    }
  if (my_error(av[1], av[2]) == 84)
    return (84);
  if ((s1 = malloc(sizeof(*av[1]) * (my_strlen(av[1] + 3)))) == 0)
    return (0);
  if ((s2 = malloc(sizeof(*av[2]) * (my_strlen(av[2] + 3)))) == 0)
    return (0);
  my_strcpy(s1, av[1]);
  my_strcpy(s2, av[2]);
  infin_add(s1, s2);
}
