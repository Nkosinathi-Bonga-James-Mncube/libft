/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:01:18 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/18 13:43:15 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		k;
	char	*m;

	k = 0;
	if (!s)
		return (NULL);
	k = ft_strlen(s);
	m = (char*)malloc(k + 1 * sizeof(char));
	if (!m)
		return (NULL);
	k = 0;
	while (m != NULL && s[k] != '\0')
	{
		m[k] = f(k, s[k]);
		k++;
	}
	m[k] = '\0';
	return (m);
}
