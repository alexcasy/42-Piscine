/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:39:07 by acasale           #+#    #+#             */
/*   Updated: 2023/02/20 13:07:34 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
void ft_print_combn(int n)
{
	int c;
	int a;
	
	a = 48;
	c = 0;
	while (c < n)
	{
		ft_putchar(a);
		a = a + 1;
		c++;
	}
}

int	main()
{
	ft_print_combn(3);
	return 0;
}
