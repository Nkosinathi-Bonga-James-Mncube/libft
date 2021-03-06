/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 10:53:23 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/15 11:45:36 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			i;
	char		x;
	long int	total;
	long		here;

	i = 1000000000;
	here = (long int)n;
	x = ' ';
	if (here == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		write(fd, "-", 1);
		here = here * -1;
	}
	while (i > here)
		i = i / 10;
	while (i > 0)
	{
		total = here / i;
		x = total + 48;
		write(fd, &x, 1);
		here = here - (total * i);
		i = i / 10;
	}
}
