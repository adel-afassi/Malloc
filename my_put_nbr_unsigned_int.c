/*
** my_put_nbr_unsigned_int.c for  in /home/adel.afassi/delivery/bootstrap
** 
** Made by adel afassi
** Login   <adel.afassi@epitech.net>
** 
** Started on  Wed Nov 16 14:00:34 2016 adel afassi
** Last update Sun Nov 20 18:53:02 2016 adel afassi
*/

void	my_put_nbr_unsigned_int(unsigned int x)
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
      my_put_nbr_unsigned_int(x / 10);
      my_put_nbr_unsigned_int(x % 10);
    }
}
