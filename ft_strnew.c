
#include "libft.h"

char * ft_strnew(size_t size)
{
	
	char *s1;
	if (size > 0)
		s1= (char*)malloc(size *sizeof(char));
	if (s1 != NULL && size > 0)
	{
		ft_bzero(s1, size);
		size = size + 1;
		s1[size] ='\0';
		return (s1);
	}
	else
		return(NULL);
}
