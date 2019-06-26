/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 09:47:32 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/26 12:45:28 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t k;
	size_t m;

	if (ft_strlen(dst) >= dstsize)
		return (dstsize + ft_strlen(src));
	if (dstsize == 0)
		return (ft_strlen(src));
	k = ft_strlen(src);
	m = 0;
	while (*dst && dstsize > 0)
	{
		dst++;
		dstsize--;
		m++;
	}
	ft_strncat(dst, (char*)src, dstsize - 1);
	if (dstsize == 1 || *src == 0)
		*dst = '\0';
	return (k + m);
}
