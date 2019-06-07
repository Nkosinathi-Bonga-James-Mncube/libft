/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:19:41 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/07 16:21:30 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
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
