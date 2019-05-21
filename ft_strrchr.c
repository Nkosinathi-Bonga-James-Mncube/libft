/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:46:13 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/21 15:05:09 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
char	*ft_strrchr (const char *s, int c)
{
	const char *x;
	int bfound;

	bfound = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			x = ((char *)s);
			bfound = 1;
		}
		s++;
	}
	if (bfound == 1)
		return ((char *)x);
	else
		return (NULL);
}
int		main()
{
	char *s1;
	char s2;
	s1 = "anthai";
	s2 = 'a';
	printf("System : %s\n" ,strrchr (s1, s2));
	printf("ft_system : %s\n" , ft_strrchr(s1, s2));
	return (0);
}
