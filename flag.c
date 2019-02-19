/*
** flag.c for  in /home/adel.afassi/delivery/PSU_2016_my_printf
** 
** Made by adel afassi
** Login   <adel.afassi@epitech.net>
** 
** Started on  Sun Nov 20 18:28:26 2016 adel afassi
** Last update Sun Nov 20 18:46:11 2016 adel afassi
*/

#include <stdarg.h>

void	flag(int i , va_list arg, const char *str)
{
  if (str[i] == '%' && str[i + 1] == 'd' && i < my_strlen(str))
    my_put_nbr(va_arg(arg, int));
  if (str[i] == '%' && str[i + 1] == 'i' && i < my_strlen(str))
    my_put_nbr(va_arg(arg, int));
  if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'd' && i < my_strlen(str))
    my_put_nbr_long(va_arg(arg, long int));
  if (str[i] == '%' && str[i + 1] == 'c' && i < my_strlen(str))
    my_putchar(va_arg(arg, int));
  if (str[i] == '%' && str[i + 1] == 's' && i < my_strlen(str))
    my_putstr(va_arg(arg, char*));
  if (str[i] == '%' && str[i + 1] == 'u' && i < my_strlen(str))
    my_put_nbr_unsigned_int(va_arg(arg, unsigned int));
  if (str[i] == '%' && str[i + 1] == '%' && i < my_strlen(str))
    my_putchar('%');
  if (str[i] == '%' && str[i + 1] == 'x' && i < my_strlen(str))
    my_putnbr_base(va_arg(arg, int), "0123456789abcdef");
  if (str[i] == '%' && str[i + 1] == 'X' && i < my_strlen(str))
    my_putnbr_base(va_arg(arg, int), "0123456789ABCDEF");
  if (str[i] == '%' && str[i + 1] == 'o' && i < my_strlen(str))
    my_putnbr_base(va_arg(arg, int), "01234567");
  if (str[i] == '%' && str[i + 1] == 'b' && i < my_strlen(str))
    my_putnbr_base(va_arg(arg, unsigned int), "01");
  flag_two(i, arg, str);
}

