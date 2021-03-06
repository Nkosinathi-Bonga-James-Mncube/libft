/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:08:20 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/26 12:13:12 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int k;

	if (!s)
		return ((void)NULL);
	k = 0;
	while (s[k] != '\0')
	{
		write(1, &s[k], 1);
		k++;
	}
	write(1, "\n", 1);
}
