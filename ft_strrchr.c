/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:46:13 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/21 15:39:27 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*x;
	int			bfound;

	bfound = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			x = ((char *)s);
			bfound = 1;
		}
		s++;
	}
	if (bfound == 1)
		return ((char *)x);
	else
		return (NULL);
}
