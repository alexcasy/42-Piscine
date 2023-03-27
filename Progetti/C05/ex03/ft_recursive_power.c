/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:35:17 by acasale           #+#    #+#             */
/*   Updated: 2023/03/08 16:40:25 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recpow(int nb, int power, int n)
{
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (n);
	}
	if (power > 1)
	{
		return (ft_recpow(nb, power - 1, n * nb));
	}
	return (0);
}

int	ft_recursive_power(int nb, int power)
{
	return (ft_recpow(nb, power, nb));
}
