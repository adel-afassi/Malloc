/*
** my_strlen.c for emacs in /home/afassiadel/delivery/CPool_Day04
** 
** Made by adel afassi
** Login   <afassiadel@epitech.net>
** 
** Started on  Fri Oct  7 11:39:43 2016 adel afassi
** Last update Sun Nov 20 12:34:25 2016 adel afassi
*/

int	 my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
