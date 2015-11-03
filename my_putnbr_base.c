/*
** my_putnbr_base.c for my_putnbr_base in /home/david/ALGO/Jour02_ALGO/my_putnbr_base
** 
** Made by LE David
** Login   <le_d@etna-alternance.net>
** 
** Started on  Tue Nov  3 18:05:05 2015 LE David
** Last update Tue Nov  3 18:44:42 2015 LE David
*/

#include <unistd.h>

void	my_swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{ 
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}



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


int	my_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] < s2[i])
	{
	  return (-1);
	}  
      else if (s1[i] > s2[i])
	{
	  return (1);
	}
      i++;
    }  
  return (0);
}

void	my_putnbr_base(int nbr, char *base)
{
  //je compare 1 par 1
  if (my_strcmp(base, "01") == 0)
    {
      char buffer[1000];
      int j;
      j = 0;
      //tant que nbr est > 0
      while (nbr > 0)
	{
	  // tu regardes le reste de la division
	  if (nbr % 2 == 0)
	    {
	      buffer[j] = '0';
	      j++;
	    }
	  // si il y a un reste, je mets un 1
	  else if (nbr % 2 == 1)
	    {
	      buffer[j] = '1';
	      j++;
	    }
	  //je divise par 2 le nbr
	  nbr /= 2;
	}
      //je ferme le buffer
      buffer[j] = '\0';
      j--;
      //je mets un compteur pour parcourir mon nouveau buffer
      int i;
      i = 0;
      //je créer mon nouveau buffer
      char buffer2[1000];
      //je parcours a l'envers mon buffer original et je stocke les valeurs dans le nouveau
      while (j >= 0)
	{
	  buffer2[i] = buffer[j];
	  i++;
	  j--;
	}
      //je ferme mon deuxieme buffer
      buffer2[i] = '\0';
      //je l'affiche
      my_putstr(buffer2);

    }
  else if (my_strcmp(base, "0123456789") == 0)
    {
      my_put_nbr(nbr);
    }
  else if (my_strcmp(base, "0123456789ABCDEF") == 0)
    {
      
    }
}

int	main()
{
  my_putnbr_base(133, "01");
  my_putchar('\n');
  //my_putnbr_base(35, "0123456789");
  //my_putchar('\n');
  //my_putnbr_base(35, "0123456789ABCDEF");
  //my_putchar('\n');



}
