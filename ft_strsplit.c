#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
static char *ft_store (char *store, char *s,char c)
{
	int k;
	k = 0;
	while(s[k] != c)
	{
		store[k] = s[k];
		k++;
	}
	return(store);
}
static int ft_s_strlen(char *s, char c)
{
	int k;
	k = 0;
	while (s[k] != c)
		k++;
	return (k);
}
static int ft_c_len(char *s, char c)
{
	int j;
	j = 0;
	while (*s == c)
		s++;
	while (*s!= '\0')
	{
		if (s[0] != c && (s[1] == c ||s[1] == '\0'))
			j++;
		if (*s != c)
			s++;
		if (*s == c)
			s++;
	}
	return (j);
}
static char *ft_c_pos(char *s, char c)
{
	while (*s != c)
		s++;
	while (*s == c)
		s++;
	return (s);
}
void ft_strsplit(char const *s, char c)
{
       char *m;
       char **here;
       char *store;
       int k;
       int j;
       int p; //remove only for testing purposes!

       j = 0;
       p = 0;
       m = (char*)s;
       k =ft_c_len(m , c);
       here = (char**)malloc(k * sizeof(char*));
	while (*s == c)
		s++;
	m = (char*)s;	
	//store=(char*)malloc(ft_s_strlen((char*)s,c) * sizeof(char));
	while (j < k)
	{
		m = s
		store=(char*)malloc(ft_s_strlen((char*)s,c) * sizeof(char));	
		here[j] =ft_store(store,(char*)m,c);
		ft_c_pos((char*) m,c);
		j++;
	}
       printf("Value : %d\n" , k);
       while (p < j)
       {
	       printf("Store block[%d] %s\n" , p,here[p]);
	       p++;
       }
}
int main()
{
	const char *s;
	s = "*hello*fellow**students*****";
	ft_strsplit(s, '*');
	//printf("Value : %d\n" , ft_c_len((char*)s,'*'));
	//printf("Count: %d\n",ft_count(s, '*'));
	return(0);
}
