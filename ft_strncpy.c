/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 09:31:55 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/07 15:44:39 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	k;

	k = 0;
	while (k < len && src[k] != '\0')
	{
		dst[k] = src[k];
		k++;
	}
	while (k < len)
	{
		dst[k] = '\0';
		k++;
	}
	return (dst);
}
