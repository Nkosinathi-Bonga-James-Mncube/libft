
#include "libft.h"

void ft_putstr(char const *s)
{
	while (*s != '\0')
	{
		write(1, &*s,1);
		s++;
	}
}

int main()
{
	char *s1;
	s1 = "Nathi";
	ft_putstr(s1);
}
