/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 12:55:44 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/19 13:14:02 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_store(char *store, char *s, int p, char c)
{
	int	k;

	k = 0;
	while (s[p] != c)
	{
		store[k] = s[p];
		p++;
		k++;
	}
	store[k] = '\0';
	return (store);
}

static	int		ft_s_strlen(char *s, char c)
{
	int k;

	k = 0;
	while (s[k] != c)
		k++;
	return (k);
}

static	int		ft_c_len(char *s, char c)
{
	int j;

	j = 0;
	while (*s == c)
		s++;
	while (*s != '\0')
	{
		if (s[0] != c && (s[1] == c || s[1] == '\0'))
			j++;
		s++;
	}
	return (j);
}

static	int		ft_c_pos(char *s, int p, char c)
{
	while (s[p] != c)
		p++;
	while (s[p] == c)
		p++;
	return (p);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**here;
	char	*store;
	int		j;
	int		p;

	j = 0;
	p = 0;
	if (!s || !c)
		return (NULL);
	here = (char**)malloc(ft_c_len((char*)s, c) * sizeof(char*));
	if (here == NULL)
		return (NULL);
	while (s[p] == c)
		p++;
	while (j < ft_c_len((char*)s, c))
	{
		store = (char*)malloc(ft_s_strlen((char*)s, c) * sizeof(char));
		here[j] = ft_store(store, (char*)s, p, c);
		p = ft_c_pos((char*)s, p, c);
		j++;
	}
	here[j] = (char *)'\0';
	return (here);
}
