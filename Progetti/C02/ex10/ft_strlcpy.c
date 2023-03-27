/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:33:20 by acasale           #+#    #+#             */
/*   Updated: 2023/02/25 12:40:24 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[i])
	{
		i ++;
	}
	if (size < 1)
	{
		return (i);
	}
	while ((src[c]) && (c < size - 1))
	{
		dest[c] = src[c];
		c ++;
	}
	dest[c] = '\0';
	return (i);
}
