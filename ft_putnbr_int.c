//#include <stdio.h>
char ft_putnbr_int(int n)
{
	int			i;
	char		x;
	long int	total;
	long int	here;

	i = 1000000000;
	here = (long int)n;
	x = ' ';
	if (here == 0)
		return ('0');
	if (n < 0)
	{
		return ('-');
		here = here * -1;
	}
	while (i > here)
		i = i / 10;

		total = here / i;
		x = total + 48;
		return (x);
}

/*int main()
{
	int test;
	test = -2;
	printf("Value: %c\n" ,putnbr_int(test));
}*/
