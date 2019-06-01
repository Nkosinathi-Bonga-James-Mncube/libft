/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:03:30 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/01 13:34:48 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *scr, int c, size_t n)
{
	size_t			a;
	unsigned char	*s1;
	unsigned char	*s2;

	a = 0;
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)scr;
	while (a < n)
	{
		s1[a] = s2[a];
		if (s1[a] == (unsigned char)c && n < 0)
			return (unsigned char*)dst + a + 1;
		a++;
	}
	return (NULL);
}
