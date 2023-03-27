/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:27:04 by acasale           #+#    #+#             */
/*   Updated: 2023/03/01 17:15:06 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			c = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					c = 1;
				i ++;
			}
			if (c == 0)
				return (str);
		}
		str ++;
	}
	return (0);
}
