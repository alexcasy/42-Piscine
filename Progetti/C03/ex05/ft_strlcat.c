/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:33:42 by acasale           #+#    #+#             */
/*   Updated: 2023/03/01 17:15:27 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = ft_strlen(dest);
	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size < 1)
	{
		return (slen + size);
	}
	while (src[j] && (i < size - 1))
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	if (size < dlen)
		return (slen + size);
	else
		return (dlen + slen);
}
