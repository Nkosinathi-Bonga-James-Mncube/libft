/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:23:41 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/19 15:03:27 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*m;
	size_t	k;
	int		l;

	l = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	m = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (m == NULL)
		return (NULL);
	while (m != NULL && s1[k] != '\0')
	{
		m[k] = s1[k];
		k++;
	}
	while (m != NULL && s2[l] != '\0')
	{
		m[k] = s2[l];
		l++;
		k++;
	}
	m[k] = '\0';
	return (m);
}
