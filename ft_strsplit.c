/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 12:55:44 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/26 10:16:54 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_num(char *s, char c)
{
	int		k;
	int		j;

	if (!s || !c)
		return (0);
	k = 0;
	j = 0;
	while (s[k] != '\0')
	{
		if (s[k + 1] == c && s[k] != c)
			j++;
		k++;
	}
	if (j > 0)
		j++;
	return (j);
}

static	int		ft_word(char const *s, char c)
{
	size_t	k;

	if (!s || !c)
		return (0);
	k = 0;
	while (*s++ != c && *s++ != '\0')
		k++;
	return (k);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**store;
	int		k;
	int		j;

	k = 0;
	j = ft_num((char*)s, c) + 1;
	if (!s || !c || !(store = (char**)malloc(sizeof(char*) * j)))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			if (!(store[k] = ft_memalloc(ft_word(s, c) + 1)))
				return (NULL);
			j = 0;
			while (*s != '\0' && *s != c)
				store[k][j++] = (char)*s++;
			store[k++][j] = '\0';
		}
	}
	store[k] = NULL;
	return (store);
}
