/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:06:16 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/30 11:29:54 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
//#include "libft.h"

/*void ft_bzero(void *s, size_t n)
{
	
}*/

int	main()
{
	int s1[5];
	//int *s1 = (int*)malloc(5 * sizeof(int));
	size_t n;
	int j;
	n = 5;
	j = 0;

	bzero(s1, n);

	while (j < 5)
	{
		/*s1[j] = 1;
		printf("s[%d] : %d\n", j, s1[j]);
		j++;*/
		printf("s[%d] : %d\n", j, s1[j]);
		j++;
	}

	return (0);
}
