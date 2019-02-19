/*
** my_put_nbr.c for emacs in /home/afassiadel
** 
** Made by adel afassi
** Login   <afassiadel@epitech.net>
** 
** Started on  Fri Oct  7 14:57:37 2016 adel afassi
** Last update Mon Nov  7 15:33:32 2016 adel afassi
*/

int	my_put_nbr(int x)
{
  if (x < 0)
    {
      my_putchar('-');
      x = x * (-1);
    }
  if (x >= 0 && x <= 9)
    my_putchar(x + 48);
  if (x > 9)
    {
      my_put_nbr(x / 10);
      my_put_nbr(x % 10);
    }
}
