/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:39:14 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/13 12:33:05 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		k;
	char	*m;

	k = 0;
	m = (char*)malloc(len + 1 * sizeof(char));
	if (m == NULL)
		return (NULL);
	while (len > 0)
	{
		m[k] = s[start];
		len--;
		start++;
		k++;
	}
	m[k] = '\0';
	return (m);
}
