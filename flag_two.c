/*
** flag_two.c for  in /home/adel.afassi/delivery/PSU_2016_my_printf
** 
** Made by adel afassi
** Login   <adel.afassi@epitech.net>
** 
** Started on  Sun Nov 20 18:29:58 2016 adel afassi
** Last update Sun Nov 20 18:47:11 2016 adel afassi
*/

#include <stdarg.h>

void	flag_two(int i, va_list arg, const char *str)
{
  if (str[i] == '%' && str[i + 1] == 'p' && i < my_strlen(str))
    {
      my_putstr("0x");
      my_putnbr_base(va_arg(arg, int), "0123456789abcdef");
    }
  if (str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'd' && i < my_strlen(str))
    my_put_nbr_short(va_arg(arg, int));
}
