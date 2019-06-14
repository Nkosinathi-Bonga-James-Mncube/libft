/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 08:58:57 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/14 14:46:20 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>
char *ft_star(char const *s, char c)
{
	while (*s == c && *s!= '\0')
	{
		s++;
	}
	return ((char *)s);
}
char *ft_strsplit(char const *s, char c)
{ 
	//char	*m;
	int		k;

	k = 0;
	while (s[k]!= '\0')
	{	
		if (s[k] == c)
		{
			k++;
			printf("Value %s\n" , (char*)&s[k]);
			ft_star((char*)&s[k],c);
		}	
		k++;
	}
	return ((char*)s);
}
int	main()
{
	printf("Value: %s\n" , ft_strsplit("***hi**man****" , '*'));
	return (0);
}*/
