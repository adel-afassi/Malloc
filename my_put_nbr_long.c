/*
** my_put_nbr_long.c for  in /home/adel.afassi/delivery/bootstrap
** 
** Made by adel afassi
** Login   <adel.afassi@epitech.net>
** 
** Started on  Tue Nov 15 14:10:35 2016 adel afassi
** Last update Sun Nov 20 18:52:15 2016 adel afassi
*/

void	my_put_nbr_long(long int x)
{
  if (x < 0)
    {
      my_putchar('-');
      x = x * (-1);
    }
  if ((x >= 0) && (x <= 9))
    {
      my_putchar(x + 48);
    }
  if (x > 9)
    {
      my_put_nbr_long(x / 10);
      my_put_nbr_long(x % 10);
    }
}
