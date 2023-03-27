/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:30:50 by acasale           #+#    #+#             */
/*   Updated: 2023/02/23 16:11:43 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_numeric(char a)
{
	if ((a >= '0' && a <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (is_numeric(str[i]))
		{
			result = 1;
		}
		else
		{
			result = 0;
			break ;
		}
		i ++;
	}
	return (result);
}
