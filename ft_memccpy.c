/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:03:30 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/05 16:21:39 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *scr, int c, size_t n)
{
	size_t			k;
	unsigned char	*s1;
	unsigned char	*s2;

	k = 0;
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)scr;
	while (k < n)
	{
		*s1 = *s2;
		s1++;
		k++;
		if (*s2 == c)
		{
			return ((unsigned char*)s1 + k + 1);
		}
		s2++;
	}
	return (NULL);
}
