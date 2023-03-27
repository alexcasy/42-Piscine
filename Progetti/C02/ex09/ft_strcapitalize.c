/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:14:00 by acasale           #+#    #+#             */
/*   Updated: 2023/02/27 16:47:13 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_lc(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_uc(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_n(char a)
{
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(is_lc(str[i - 1]) || is_uc(str[i - 1]) || is_n(str[i - 1])))
			{
				str[i] -= 32;
			}
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (is_lc(str[i - 1]) || is_uc(str[i - 1]) || is_n(str[i - 1]))
			{
				str[i] += 32;
			}
		}
		i ++;
	}
	return (str);
}
