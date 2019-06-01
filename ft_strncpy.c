/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 09:31:55 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/01 14:10:15 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s1;
	size_t	j;
	int		k;

	k = 0;
	j = 0;
	s1 = (char*)src;
	while (s1[k] != '\0' && j < len)
	{
		dst[k] = s1[k];
		k++;
		j++;
	}
	return (dst);
}
