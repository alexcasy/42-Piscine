/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:15:06 by acasale           #+#    #+#             */
/*   Updated: 2023/02/27 11:17:28 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	d;

	d = 0;
	while (src[d] != '\0')
	{
		dest[d] = src[d];
		d ++;
	}
	dest[d] = '\0';
	return (dest);
}