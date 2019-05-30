/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:18:14 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/30 15:34:57 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strstr(const char *haystack, const char *needle)
{
	int bfound;
	int k;

	bfound = 0;
	k = 0;
	if (needle[0] == '\0')
		return((char*)haystack);
	while (*haystack != *needle)
		haystack++;
	while (needle[k]!='\0')
	{
		if (haystack[k] == needle[k])
			k++;
		else
		{
			bfound = 1;
			break;
		}
	}
	if (bfound == 0)
	return((char*)haystack);
	else
	return (NULL);	
}
int	main()
{
	char s1[5] = "room";
	char s2[10] = "Bedroom";
	printf("System : %s\n", strstr(s1, s2));
	printf("ft_strstr: %s\n" , ft_strstr(s1,s2));
	return (0);
}
