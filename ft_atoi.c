/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:46:18 by event             #+#    #+#             */
/*   Updated: 2019/06/04 11:46:29 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		ft_bfound(char *c)
{
	int bfound;

	bfound = 0;
	if (c[0] == '-')
		bfound = 1;
	if (c[0] == '+')
		bfound = 0;
	return (bfound);
}

int		ft_atoi(const char *str)
{
	int bfound;
	int value;
	int k;

	value = 0;
	bfound = 0;
	k = 0;
	while ((*str >= 8 && *str <= 13) || (*str == 32))
	{
		str++;
	}
	if (str[0] == '-' || str[0] == '+')
	{
		bfound = ft_bfound((char*)str);
		str++;
	}
	while (str[k] >= 48 && str[k] <= 57 && str[k] != '+' || str[k] != '-' && str[k] != '\0')
	{
		value = (value * 10) + str[k] - 48;
		k++;
	}
	if (bfound == 1)
		value = value * -1;
	return (value);
}
