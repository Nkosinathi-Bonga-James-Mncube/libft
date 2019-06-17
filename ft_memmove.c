/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:16:47 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/17 10:23:51 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *scr, size_t len)
{
	char	*s1;
	char	*s2;
	int		k;
	size_t	j;
	j = 0;
	//char *m = "Nathi";
	
	k = (int)len;
	s1 = (char*)scr;
	s2 = (char*)dst;
	j =  ft_strlen((const char*)s2);
	if ( j == 0 || len == 0)
		return(dst);	
	while (len > 0 && j != 0)
	{
		*s2 = *s1;
		s1++;
		s2++;
		len--;
	}
	if (k > 0 )
	{
		return (dst);
	}
	else
		return (NULL);
}

/*int	main()
{
	char dst[30];
	char scr[100] = "lorem ipsum dolor sit amet";
	printf("System : %s\n", memmove(scr,dst,8));
	printf("ft_memove : %s\n", ft_memmove(scr,dst,8));
	return(0);
}*/
