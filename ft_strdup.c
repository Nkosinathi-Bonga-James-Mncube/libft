/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:58:14 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/30 10:48:08 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			k;
	const char	*s2;

	k = 0;
	while (s1[k] != '\0')
		k++;
	s2 = (char*)malloc(k * sizeof(char));
	s2 = s1;
	if (s2 != NULL)
		return ((char*)s2);
	else
		return (NULL);
}
