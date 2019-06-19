/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:51:46 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/19 14:55:21 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			k;
	int			i;
	long int	total;
	char		*m;

	i = 1000000000;
	k = 0;
	total = (long int)n;
	m = (char*)malloc(ft_int_len(n) + 1 * sizeof(char));
	if (m == NULL)
		return (NULL);
	if (total == 0)
		return ((char*)ft_memset(m, '0', ft_int_len(total)));
	if (total < 0)
	{
		m[0] = '-';
		total = total * -1;
		k++;
	}
	return (ft_loop(i, m, total, k));
}
