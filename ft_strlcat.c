/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:55:40 by nmncube           #+#    #+#             */
/*   Updated: 2019/05/24 15:40:20 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "libft.h"
#include <string.h>
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int k;
	unsigned int total;
	int j;
	j  = 0;
	k = 0;

	while (src[k] != '\0')
		k++;
	while (dst[j] != '\0')
		j++;
	if ( k > 0 && j > 0)
		total = dstsize + k;
	else
	total = k;	
	//total = total + k; 
	/*while (dst[k] != '\0')
	{
		//src[k] = dst[j];
		dst[j] = src[k];
		k++;
		j++;
		//total = total + j;
	}*/
	return (total);
}
int		main ()
{
	char s1[10] = "a";
	char s2[10] = "abc";
	size_t n;

	n = 3;
	printf("System : %lu\n" , strlcat(s1 ,s2 ,n));
	//printf("ft_strlpy %lu\n" ,ft_strlcpy(s1 , s2 , n));
	return (0);
}
