/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:58:14 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/07 12:55:28 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		k;
	int		i;
	char	*s2;

	k = 0;
	i = 0;
	while (s1[k] != '\0')
		k++;
	s2 = (char*)malloc(k - 1 * sizeof(s1[0]));
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	if (s2 != NULL)
		return ((char*)s2);
	else
		return (NULL);
}
