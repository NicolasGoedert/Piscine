/*
** test.c for dez in /home/nicolas94200/Piscine
** 
** Made by goedert nicolas
** Login   <nicolas94200@epitech.net>
** 
** Started on  Tue Apr 25 15:25:06 2017 goedert nicolas
** Last update Tue Apr 25 15:25:06 2017 goedert nicolas
*/

char	*my_strlowcase(char *str)
{
  int	i;
  while (str[i] != '\0')
    {
      if (str[i] = 'A' && str[i] = 'Z')
	str[i] = str[i] + 32;
      i = i + 1;
    }
  return (str);
}
