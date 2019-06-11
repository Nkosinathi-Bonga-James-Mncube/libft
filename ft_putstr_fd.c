/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:14:20 by nmncube           #+#    #+#             */
/*   Updated: 2019/06/11 15:26:06 by nmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(char const *s, int fd)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		write(fd,&s[k],1);
		k++;
	}
}
