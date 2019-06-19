/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:16:37 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/19 14:57:13 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (*s1 != c1 && n > 0 && *s1 != '\0')
	{
		n--;
		s1++;
	}
	if (n == 0)
		return (NULL);
	return ((void *)s1);
}
