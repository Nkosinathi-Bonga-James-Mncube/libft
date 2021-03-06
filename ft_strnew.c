/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:18:47 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/23 10:45:55 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s1;

	s1 = (char*)malloc(size + 1 * sizeof(char));
	if (s1 != NULL)
	{
		size++;
		ft_bzero(s1, size);
		return ((char*)s1);
	}
	else
		return (NULL);
}
