/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:18:14 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/22 13:53:42 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static	char *ft_output(const char *haystack, const char *needle)
{
	int k;
	const char *blank;
	int bFound;
	k = 0;
	bFound = 0;
	blank = "";

	while ( needle[k] != '\0')
	{
		if ( needle [k] == haystack[k])
			bFound = 1;
		else
		{
			bFound = 0;
			break;
		}
		k++;
	}
	if (needle == blank)
	return ((char *) haystack);
	else
	if (bFound == 0)
	return (NULL);
	else
	return ((char *) haystack);	
}
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
	return (ft_output(haystack ,needle));
}
int	main()
{
	char *s1;
	char *s2;

	s1 = "Bed roomi";
	s2 = "";
	printf("ft_stsrt : %s\n" ,ft_strstr (s1 , s2));
	printf("System: %s\n" , strstr (s1, s2));
	return (0);
}
