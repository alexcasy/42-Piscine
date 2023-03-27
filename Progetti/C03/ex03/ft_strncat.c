/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:58:41 by acasale           #+#    #+#             */
/*   Updated: 2023/03/01 14:45:01 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*p;

	p = dest;
	while (*p)
	{
		p ++;
	}
	while (*src && (nb > 0))
	{
		*p = *src;
		p ++;
		src ++;
		nb --;
	}
	*p = '\0';
	return (dest);
}
