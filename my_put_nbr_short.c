/*
** my_put_nbr_short.c for  in /home/adel.afassi
** 
** Made by adel afassi
** Login   <adel.afassi@epitech.net>
** 
** Started on  Sun Nov 20 16:21:33 2016 adel afassi
** Last update Sun Nov 20 18:52:36 2016 adel afassi
*/

void	my_put_nbr_short(short int x)
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
      my_put_nbr_short(x / 10);
      my_put_nbr_short(x % 10);
    }
}
