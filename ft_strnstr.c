/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:05:27 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/18 13:17:00 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*s1;
	const char	*s2;
	size_t		s;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0' && len > 0)
	{
		s1 = haystack;
		s2 = needle;
		s = len;
		while (*s2 != '\0' && *s1 == *s2 && s > 0)
		{
			s1++;
			s2++;
			s--;
		}
		if (*s2 == '\0')
			return ((char*)haystack);
		haystack++;
		len--;
	}
	return (0);
}
