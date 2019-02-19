/*
** my_putstr.c for emacs in /home/afassiadel/delivery/CPool_Day04
** 
** Made by adel afassi
** Login   <afassiadel@epitech.net>
** 
** Started on  Fri Oct  7 10:17:40 2016 adel afassi
** Last update Sun Nov 20 12:40:21 2016 adel afassi
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
