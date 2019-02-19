/*
** my_printf.c for  in /home/adel.afassi/delivery/PSU_2016_my_printf
** 
** Made by adel afassi
** Login   <adel.afassi@epitech.net>
** 
** Started on  Sun Nov 20 18:56:32 2016 adel afassi
** Last update Sun Nov 20 18:56:42 2016 adel afassi
*/


#include <stdarg.h>
#include <stdio.h>

int	my_printf(const char *str, ...)
{
  va_list	arg;
  int		i;
  int		a;

  a = 0;
  i = 0;
  va_start(arg, str);
  while (str[i] != '\0')
    {
      flag(i, arg, str);
      a = i;
      if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'd')
	i = i + 3;
      if (str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'd')
	i = i + 3;
      if (str[i] == '%' && a == i)
	i = i + 2;
      else
	{
	  if (i < my_strlen(str))
	    my_putchar(str[i]);
	  i = i + 1;
	}
    }
  va_end(arg);
}
