/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:46:34 by acasale           #+#    #+#             */
/*   Updated: 2023/02/27 10:59:38 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_hexa(int c, int err)
{
	char	*b;

	b = "0123456789abcdef";
	if ((c <= 0) && (err == 0))
	{
		c += 256;
	}
	if (c >= 16)
	{
		put_hexa(c / 16, 1);
		put_hexa(c % 16, 1);
	}
	else
	{
		if (err == 0)
			write(1, "0", 1);
		write(1, &b[c], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			j = str[i];
			put_hexa(j, 0);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i ++;
	}
}
