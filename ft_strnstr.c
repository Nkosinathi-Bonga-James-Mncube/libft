/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:05:27 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/01 14:32:53 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int bfound;
	int k;

	bfound = 0;
	k = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	if (len == 0)
		return (NULL);
	while (*haystack != *needle && len >= 0)
		{
			haystack++;
			len--;
		}

	//printf("Value : %s\n" , haystack);
	while (needle[k] != '\0')
	{
		
		if (needle[k] != haystack[k])
			{
				bfound = 1;
				return (NULL);
				//bfound = 1;
			}
		/*if (needle[k] == haystack[k])
			needle++;
		else
		{
			bfound = 1;
			break ;
		}*/
		k++;
	}
	if (bfound == 0)
		return ((char*)haystack);
	else
		return (NULL);
}

/*int	main()
{
	printf("System : %s\n", strnstr("lorem ipsum dolor sit amet", "dolar", 15));
	printf("ft_strnstr: %s\n", ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor" , "dolar",15));
	return (0);
}*/
