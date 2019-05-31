/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:05:27 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/31 11:03:51 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int bfound;
	int k;
	
	bfound = 0;
	k = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (*haystack != *needle && len >= ft_strlen(haystack) - 1)
		haystack++;
	while (needle[k] != '\0')
	{
		if (needle[k] == haystack[k])
			needle++;
		else
		{
			bfound = 1;
			break ;
		}
		k++;
	}
	if (bfound == 0)
		return ((char*)haystack);
	else
		return (NULL);
}
