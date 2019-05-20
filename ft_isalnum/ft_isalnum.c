#include <stdio.h>
#include <ctype.h>
int		ft_isalnum(int c)
{		if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)) || ((c >= 48) &&(c <= 57)))
		return c = 1;
		else
		return c = 0;
}
int		main()
{		
		int k;
		k = '\n';
		printf("System : %d\n" , isalnum(k));
		printf("ft_isalnum : %d\n", ft_isalnum(k));
		return (0);
}
