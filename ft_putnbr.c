/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:35:34 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/17 10:35:38 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int			i;
	char		x;
	long int	total;
	long int	here;

	i = 1000000000;
	here = (long int)n;
	x = ' ';
	if (here == 0)
		write(1, "0", 1);
	if (n < 0)
	{
		write(1, "-", 1);
		here = here * -1;
	}
	while (i > here)
		i = i / 10;
	while (i > 0)
	{
		total = here / i;
		x = total + 48;
		write(1, &x, 1);
		here = here - (total * i);
		i = i / 10;
	}
}
