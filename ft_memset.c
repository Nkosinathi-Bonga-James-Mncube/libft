/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:46:35 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/25 10:59:39 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char x;
	unsigned char *s1;

	s1 = b;
	x = (unsigned char)c;
	while (len > 0)
	{
		*s1 = c;
		s1++;
		len--;
	}
	return (b);
}
