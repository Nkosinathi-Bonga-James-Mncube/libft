#include <stdio.h>
#include <stdlib.h>

int ft_int_len(int n)
{	
	int k;
	long int total;
	
	k = 1;
	total = (long int)n;
	if (total == 0)
		return (k);
	if (total < 0)
	{ 
		k++;
		total = total * -1;
	}
	while (total > 10)
	{
		total = total / 10;
		k++;
	}
	return (k);
}
