/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:48:06 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/24 12:52:56 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int				k;
	unsigned int	j;

	k = 0;
	j = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[j] != '\0' && n > j)
	{
		s1[k] = s2[j];
		k++;
		j++;
	}
	s1[k] = '\0';
	return (s1);
}
