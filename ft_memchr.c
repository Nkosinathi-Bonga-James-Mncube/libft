/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:16:37 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/07 16:23:16 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	char	*str;

	s1 = (char*)s;
	if (n < 0)
	{
		str = ft_strchr(s1, c);
		return ((char *)str);
	}
	while (*s1 != '\0' && n > 0)
	{
		if (*s1 == c)
		{
			return ((char*)s1);
			break ;
		}
		n--;
		s1++;
	}
	return (NULL);
	}
