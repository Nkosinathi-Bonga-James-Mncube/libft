/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:41:09 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/24 10:23:47 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int total;

	total = 0;
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			total = *s1 - *s2;
			break ;
		}
		s1++;
		s2++;
		n--;
	}
	return (total);
}
