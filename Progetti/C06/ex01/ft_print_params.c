/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:58:17 by acasale           #+#    #+#             */
/*   Updated: 2023/03/02 13:35:24 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i ++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc >= 1)
	{
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i ++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
