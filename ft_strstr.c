/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:18:14 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/30 16:00:15 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int bfound;
	int k;

	bfound = 0;
	k = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (*haystack != *needle && *haystack != '\0')
		haystack++;
	while (needle[k] != '\0')
	{
		if (haystack[k] == needle[k])
			k++;
		else
		{
			bfound = 1;
			break ;
		}
	}
	if (bfound == 0)
		return ((char*)haystack);
	else
		return (NULL);
}
