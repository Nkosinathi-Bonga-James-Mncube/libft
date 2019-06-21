/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 09:47:32 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/21 10:08:32 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t k;
	size_t m;

	if (ft_strlen(dst) >= l)
		return (l + ft_strlen(src));	
	if (l == 0)
		return (ft_strlen(src));
	k = ft_strlen(src);
	m = 0;
	while (*dst && l > 0)
	{
		dst++;
		l--;
		m++;
	}
	ft_strncat(dst, (char*)src, l - 1);
	if (l == 1 || *src == 0)
		*dst = '\0';
	return (k + m);
}
