/*
** my_param_to_tab.c for my_param_to_tab in /home/clement/Piscine/CPool_Day09/task03
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Oct 13 12:39:44 2016 clement girard
** Last update Fri Oct 14 22:00:04 2016 clement girard
*/

#include <stdlib.h>

struct s_stock_par	*my_param_to_tab(int ac, char **av)
{
  int		i;
  t_stock_par	*s;

  i = 0;
  if ((s = (t_stock_par*)malloc(sizeof(*s) * (ac))) == NULL)
    return (NULL);
  while (i < ac)
    {
      s[i].size_param = my_strlen(av[i]);
      s[i].str = NULL;
      s[i].str = av[i];
      s[i].copy = NULL;
      s[i].copy = my_strdup(av[i]);
      s[i].tab = NULL;
      s[i].tab = my_str_to_wordtab(av[i]);
      i = i + 1;
    }
  s[i].str = '\0';
  return (s);
}
