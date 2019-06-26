/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:16:47 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/26 11:58:41 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *scr1;
	char *dst1;

	if (!dst && !scr)
		return (NULL);
	scr1 = (char*)src;
	dst1 = (char*)dst;
	if (scr1 < dst1)
	{
		scr1 = scr1 + len - 1;
		dst1 = dst1 + len - 1;
		while (len-- > 0)
			*dst1-- = *scr1--;
	}
	else
		while (len-- > 0)
			*dst1++ = *scr1++;
	return (dst);
}
