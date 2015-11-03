/*
** my_put_nbr.c for my_put_nbr in /home/david/Jour05_DEVC/le_d/my_put_nbr
** 
** Made by LE David
** Login   <le_d@etna-alternance.net>
** 
** Started on  Fri Oct 23 14:24:37 2015 LE David
** Last update Thu Oct 29 11:19:09 2015 LE David
*/

#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str);

void	my_put_nbr(int n)
{
  int	div;
  int	min;
  int	max;
  
  div = 1;
  min = n;
  if (min == -2147483648)
    {
      my_putstr("-2147483648");
    }
  else
    {
      if (n < 0)
	{
	  my_putchar('-');
	  n = n * (-1);
	}
      while ((n / div) >= 10)
	div = div * 10;
      while (div > 0)
	{
	  my_putchar((n / div) % 10 + 48);
	  div = div / 10;
	}
    }
}
