
#include "libft.h"
char *ft_itoa(int n)
{
	int k;
	int i;
	char *m;
	long int total;

	i = 1000000000;
	k = 0;
	total = (long int)n;
	m = ft_memalloc((size_t)ft_int_len(total));
	if (total == 0)
		return((char*)ft_memset(m,'0',ft_int_len(total)));
	if (total < 0)
	{
		m[0] = '-';
		total = total * -1;
		k++;
	}
	return (ft_loop(i,m,total,k));
}
