/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:48:35 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/20 11:51:33 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
int		ft_atoi(const char *str)
{		
		int bfound;
		int value;
		int k;
		value = 0;
		bfound = 1;
		k = 0;
		
		if (((*str >= 8) && (*str <= 13)) || (*str == 32))
			str ++;
		if (str[0] == '-')
			bfound = -1;
		while ((str[k]>= 48) && (str[k] <= 57) && (str[k] != '\0'))
		{	value = (value * 10) +str[k] - 48;
			k++;
		}
		value  = value *bfound;
		return (value);
}
int		main(int argc, char **argv)
{		
		if (argc == 2)
		printf("System %d\n", atoi(argv[1]));
		printf("ft_atoi: %d\n" , ft_atoi(argv[1]));
		return (0);
}
