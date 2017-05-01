/*
** my_putstr.c for putstr in /home/nicolas94200/Piscine
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Wed Feb  1 16:36:13 2017 goedert nicolas
** Last update Wed Feb  1 16:36:16 2017 goedert nicolas
*/

void	my_putchar(char c);

int	my_putstr(char *str)
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
