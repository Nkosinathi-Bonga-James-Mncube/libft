/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:18:14 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/22 12:37:49 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strstr(const char *haystack, const char *needle)
{
	int k;
	int bFound;
	k = 0;
	bFound = 0;
	while ( *haystack != '\0' )
	{
		if ( *haystack != *needle )
			haystack++;
			else
			break ;
	}
	while ( needle[k] != '\0')
	{
		if ( needle[k] == haystack[k])
		bFound = 1;
		else
		{
			bFound = 0;
			break;
		}
		k++;
	}
	if ( bFound == 0)
		return (NULL);
	else
		return ((char *) haystack);
}
int	main()
{
	char *s1;
	char *s2;

	s1 = "Bed room";
	s2 = "";
	printf("ft_stsrt : %s\n" ,ft_strstr (s1 , s2));
	printf("System: %s\n" , strstr (s1, s2));
	return (0);
}
