/*
** my_show_wordtab.c for my_show_wordtab in /home/clement/Piscine/CPool_Day08/task03
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Oct 12 10:28:25 2016 clement girard
** Last update Wed Oct 12 10:37:40 2016 clement girard
*/

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
