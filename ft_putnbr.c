#include "libft.h"
void	ft_putnbr(int n)
{
	int i;
	char x;
	long int total;
	i = 1000000000;
	total = 0;
	x = ' ';
	if (n == 0)
		write(1, "0",1);
	if (n < 0)
	{
		write(1,"-",1);
		n = n  *-1;
	}
	 while (i > n)
		i = i /10;
	 while (i > 0)
	 {
		 total = n / i;
		 x = total + 48;
		 write(1, &x, 1);
		 n = n - (total * i);
		 i = i /10;
	 }
}
