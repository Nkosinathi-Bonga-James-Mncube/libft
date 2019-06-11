/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:08:20 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/11 12:17:47 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_putendl(char const *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		write(1, &s[k], 1);
		k++;
	}
	write(1, "\n", 1);
}