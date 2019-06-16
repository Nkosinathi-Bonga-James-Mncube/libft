/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:46:35 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/11 15:12:30 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char x;
	unsigned char *s1;

	s1 = b;
	while (s1 != NULL && len > 0)
	{
		len--;
		*s1 = c;
		s1++;
	}
	return ((void*)b);
}
