/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:03:30 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/26 12:31:30 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char*)dst;
	s2 = (char*)src;
	if (n == 0 && src == NULL)
		return (s2);
	while (n > 0)
	{
		if (*s2 == (char)c)
		{
			*s1 = *s2;
			return ((void *)(s1 + 1));
		}
		*s1 = *s2;
		s1++;
		s2++;
		n--;
	}
	return (NULL);
}
