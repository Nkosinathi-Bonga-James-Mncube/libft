/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:16:47 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/17 15:32:56 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *scr, size_t len)
{
	char *s1;
	char *s2;
	int k;
	
	s1 =  (char*)dst;
	s2 = (char*)scr;
	k = 0;
	if (!dst && !scr)
		return (NULL);
	if (dst <= scr)
	{
		while (k < (int)len)
		{
			s1[k] = s2[k];
			k++;
		}
	}
	else
		while (len-- > 0)
		{
			s1[k] = s2[k];
			k++;
		}
	return (dst);
}


