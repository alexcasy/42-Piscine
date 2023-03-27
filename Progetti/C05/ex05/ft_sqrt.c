/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:57:57 by acasale           #+#    #+#             */
/*   Updated: 2023/03/08 16:18:41 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	c;
	unsigned int	result;

	c = 1;
	result = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (nb);
	while (result < (unsigned int) nb)
	{
		c ++;
		result = c * c;
	}
	if ((c * c) == (unsigned int) nb)
		return ((int) c);
	return (0);
}
