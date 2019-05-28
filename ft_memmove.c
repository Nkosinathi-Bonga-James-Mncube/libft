/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:16:47 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/28 11:16:10 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *scr, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				k;

	k = len;
	s1 = (unsigned char*)scr;
	s2 = (unsigned char *)dst;
	k = len;
	while (len > 0 && *s1 != '\0')
	{
		*s2 = *s1;
		s1++;
		s2++;
		len--;
	}
	if (k > 0)
		return (dst);
	else
		return (NULL);
}
