/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:03:35 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/17 14:49:09 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *scr, size_t n)
{
	size_t			j;
	unsigned char	*s1;
	unsigned char	*s2;

	if (!dst && !scr)
		return(NULL);

	s1 = (unsigned char*)scr;
	s2 = (unsigned char*)dst;
	j = 0;
	if (n < 1)
		return (dst);
	while (j < n)
	{
		s2[j] = s1[j];
		j++;
	}
	return (dst);
}
