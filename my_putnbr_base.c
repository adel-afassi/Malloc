/*
** my_putnbr_base.c for  in /home/adel.afassi/delivery/PSU_2016_my_printf
** 
** Made by adel afassi
** Login   <adel.afassi@epitech.net>
** 
** Started on  Fri Nov 18 13:22:44 2016 adel afassi
** Last update Sun Nov 20 18:51:19 2016 adel afassi
*/

int	my_putnbr_base(int nb, char *base)
{
  int	size;
  int	power;
  int	nbr;

  size = my_strlen(base);
  power = 1; 
  while ((nb / power) >= size)
    power = power * size;
  while (power > 0)
    {
      nbr = (nb / power) % size;
      my_putchar(base[nbr]);
      power = power / size;
    }
}
