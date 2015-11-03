/*
** my_putnbr_base.c for my_putnbr_base in /home/david/ALGO/Jour02_ALGO/my_putnbr_base
** 
** Made by LE David
** Login   <le_d@etna-alternance.net>
** 
** Started on  Tue Nov  3 18:05:05 2015 LE David
** Last update Tue Nov  3 18:44:42 2015 LE David
*/

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
      
    }
  else if (my_strcmp(base, "0123456789") == 0)
    {
      
    }
  else if (my_strcmp(base, "0123456789ABCDEF") == 0)
    {
      
    }
}

int	main()
{
  my_putnbr_base(35, "01");
  my_putchar('\n');
  //my_putnbr_base(35, "0123456789");
  //my_putchar('\n');
  //my_putnbr_base(35, "0123456789ABCDEF");
  //my_putchar('\n');


  
}
