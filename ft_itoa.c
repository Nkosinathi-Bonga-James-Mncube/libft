/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 12:13:37 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/15 15:00:28 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include "ft_putnbr_int.c"
char *ft_itoa(int n)
{
	int k;
	long int i;
	long int j;
	char *m;
	k = 1;
	i = 1000000000;
	j = n;
	if (j < 0)
		k++;
	while(j > 10)
	{
		j = j / 10;
		k++;
	}
	m = (char*)malloc(k + 1 *sizeof(char));
	while (i > n)
		i = i / 10;
	k = 0;
	while (i > 0)
	{
		m[k] = ft_putnbr_int(n);
		n = n - ((m[k] - 48 ) * i);
		i = i / 10;
		k++;
	}
	return (m);
}
int main()
{
	int n;
	n = 1234567891;
	//n = 2147483647;//postive bound;
	//n = -2147483648;//negitive bound;
	printf("Value of array:%s\n " ,ft_itoa(n));
	return (0);
}
