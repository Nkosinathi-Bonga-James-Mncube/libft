/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:18:14 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/20 15:54:50 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strstr( const char *s1, const char *s2)
{
	int bfound;
	char *s3;
	bfound = 0;
	while (*s1 != *s2)
		s1 ++;
	while (*s1 != '\0')
	{
	if (*s1 == *s2)
		bfound = bfound + 0;
	else
		bfound = bfound + 1;
		s1++;
	}
	if (bfound == 0)
		s3 = s2;
		return (s3);
}
int	main()
{
	printf("ft_strstr: %s\n",ft_strstr("bedroom" , "room"));
	printf("%s\n" , strstr("bedroom","room"));
	return (0);
}
