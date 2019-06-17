/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:31:06 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/17 14:27:58 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		k;
	char	*m;

	k = 0;
	if (!s)
		return (NULL);
	k = ft_strlen(s);
	m = (char *)malloc(k + 1 * sizeof(char));
	if (m == NULL)
		return(NULL);
	k = 0;
	while (m != NULL && s[k] != '\0')
	{
		m[k] = f(s[k]);
		k++;
	}
	m[k] = '\0';
	return (m);
}
