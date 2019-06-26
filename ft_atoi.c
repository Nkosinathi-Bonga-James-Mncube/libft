/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:46:18 by event             #+#    #+#             */
/*   Updated: 2019/06/26 11:29:34 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num(char c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}

static	int	ft_bfound(char *c)
{
	if (c[0] == '-')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
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
	while (ft_num(str[k]) && (str[k] != '+' || str[k] != '-') && str[k] != '\0')
	{
		value = (value * 10) + str[k] - 48;
		k++;
	}
	if (bfound == 1)
		value = value * -1;
	return (value);
}
