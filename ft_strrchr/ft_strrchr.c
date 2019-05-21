/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:32:25 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/21 12:37:21 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int bfound;

	bfound = 0;
	while (*s != '\0')
	{
		if (*s != c)
			s++;
		else
		{
			bfound = 1;
			break ;
		}
	}
	if (bfound == 1)
		return ((char*)s);
	else
		return (NULL);
}
