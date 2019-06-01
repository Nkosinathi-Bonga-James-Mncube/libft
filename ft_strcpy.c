/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:57:25 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/01 11:24:08 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char *ft_strcpy( char *dst , const char *scr)
{
	int k;
	char *s1;
	k = 0;
	s1= (char*)scr;

	while (s1[k] != '\0')
	{
		dst[k] = s1[k];
		k++;
	}
	return(dst);
}
