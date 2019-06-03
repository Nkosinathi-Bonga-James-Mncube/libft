/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:48:35 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/20 12:48:48 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int		ft_atoi(const char *str)
{
	int bfound;
	int value;
	int k;

	value = 0;
	bfound = 0;
	k = 0;
	while ((*str >= 8 && *str <= 13) || (*str == 32))
		str++;
	if (str[0] == '-')
	{
		bfound = 1;
		str++;
	}
	while ((str[k] >= 48 && str[k] <= 57) && (str[k] != '\0'))
	{
		value = (value * 10) + str[k] - 48;
		k++;
	}
	if (bfound == 1)
		value = value *-1;
	return (value);
}
