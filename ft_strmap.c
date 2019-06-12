/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:31:06 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/12 12:58:21 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		k;
	char	*m;

	k = 0;
	k = ft_strlen(s);
	m = (char *)malloc(k * sizeof(char));
	k = 0;
	while (m != NULL && s[k] != '\0')
	{
		m[k] = f(s[k]);
		k++;
	}
	return (m);
}
