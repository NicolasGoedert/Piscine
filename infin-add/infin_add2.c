
/*
** infin_add2.c for infin_add2.c in /home/DoWdoX/CPool_infinadd
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Tue Oct 25 13:27:20 2016 DORIAN DEBOUT
** Last update Mon Oct 31 20:05:46 2016 clement girard
*/
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_error(char c)
{
  write(2, &c, 1);
}

int	my_puterror(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_error(str[i]);
      i++;
    }
  return (0);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      str[i] = str[i] + 48;
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

char    *my_strncat(char *dest, char *src, int nb)
{
  int   i;
  int   j;

  i = 0;
  while (dest[i] != '\0')
    i = i + 1;
  j = 0;
  while (src[j] != '\0' && j < nb)
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}

char    *my_strcat(char *dest, char *src)
{
  int   i;
  int   j;

  i = 0;
  while (dest[i] != '\0')
    i = i + 1;
  j = 0;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}

char    *my_strcpy(char *dest, char *src)
{
  int   i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}

int  my_putnbr(int n)
{
  int   D;

  D = 1;
  if (n < 0)
    {
      my_putchar('-');
      n *= -1;
    }
  while ((n / D) >= 10)
    {
      D *= 10;
    }
  while (D > 0)
    {
      my_putchar((n / D) % 10 + 48);
      D /= 10;
    }
}

char	*addinf(char *a, char *b, char **av)
{
  int	diff;
  int	supp;
  int	inf;
  int	j;
  int	retenue;
  char	*result;
  char	*s3;
  char	*zero;

  if (strlen(a) >= strlen(b))
    {
      supp = strlen(av[1]);
      inf = strlen(av[2]);
    }
  else if (strlen(a) < strlen(b))
    {
      supp = strlen(av[2]);
      inf = strlen(av[1]);
    }
  diff = supp - inf;
  j = 0;
  zero = malloc(sizeof(char) * (diff + 1));
  while (j < diff)
    {
      zero[j] = '0';
      j = j + 1;
    }
  s3 = malloc(sizeof(char) * (supp + 1));
  if (strlen(a) >= strlen(b))
    {
      my_strncat(zero, b, supp + 1);
      s3 = zero;
    }
  else if (strlen(a) < strlen(b))
    {
      my_strncat(zero, a, supp + 1);
      s3 = zero;
    }
  result = malloc(sizeof(char) * (supp + 1));
  supp = supp - 1;
  retenue = 0;
  while (supp >= 0)
    {
      if (strlen(a) >= strlen(b))
	{
	  result[supp] = a[supp] + s3[supp] + retenue;
	  retenue = 0;
	  if ((result[supp] - 48) > '9')
	    {
	      result[supp] = result[supp] - 10;
	      retenue = 1;
	    }
	}
      else
	{
	  result[supp] = b[supp] + s3[supp] + retenue;
	  retenue = 0;
	  if ((result[supp] - 48) > '9')
	    {
	      result[supp] = result[supp] - 10;
	      retenue = 1;
	    }
	}
      result[supp] = result[supp] - 96;
      supp = supp - 1;
    }
  my_putstr(result);
  my_putchar('\n');
  return (0);  
}

int	main(int ac, char **av)
{
  char	*a;
  char	*b;

  if ((a = malloc(sizeof(*av[1]) * (strlen(av[1] + 3)))) == 0)
    return (0);
  if ((b = malloc(sizeof(*av[2]) * (strlen(av[2] + 3)))) == 0)
    return (0);
  strcpy(a, av[1]);
  strcpy(b, av[2]);
  if (ac == 3)
    addinf(a, b, av);
  else
    {
      my_puterror("Not enough or too many arguments"); 
      return (84);
    }
  return (0);
}
