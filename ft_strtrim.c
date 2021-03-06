/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:21:46 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/17 13:41:59 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		end;
	char	*m;
	int		j;

	if (!s)
		return (NULL);
	j = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	end = ft_strlen(s) - 1;
	if (end < 0)
		return ((char*)s);
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	m = (char*)malloc(end + 2 * sizeof(char));
	if (m == NULL)
		return (NULL);
	while (end >= 0 && m != NULL)
	{
		m[j] = s[j];
		j++;
		end--;
	}
	m[j] = '\0';
	return (m);
}
