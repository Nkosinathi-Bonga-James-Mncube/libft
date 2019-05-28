/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:56:05 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/28 15:38:27 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	int				total;

	total = 0;
	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	while (*st1 == *st2 && n > 0)
	{
		st1++;
		st2++;
		n--;
	}
	if (st1[0] != st2[0] && n != 0)
	{
		total = (int)st1[0] - (int)st2[0];
		return (total);
	}
	else
		return (0);
}
