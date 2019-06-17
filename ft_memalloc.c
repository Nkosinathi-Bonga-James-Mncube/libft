/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:39:34 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/17 14:40:14 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int *input;

	input = (int*)malloc(size * sizeof(int));
	if (input == NULL)
		return (NULL);
	ft_memset(input, 0, size);
	if (input != NULL)
		return ((void*)input);
	else
		return (NULL);
}
