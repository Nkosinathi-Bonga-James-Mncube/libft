/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:21:59 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/19 14:24:41 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_len(int n)
{
	int			k;
	long int	total;

	k = 1;
	total = (long int)n;
	if (total == 0)
		return (k);
	if (total < 0)
	{
		k++;
		total = total * -1;
	}
	while (total > 10)
	{
		total = total / 10;
		k++;
	}
	return (k);
}
