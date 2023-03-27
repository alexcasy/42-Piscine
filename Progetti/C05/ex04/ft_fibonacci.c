/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:58:10 by acasale           #+#    #+#             */
/*   Updated: 2023/03/07 16:13:49 by acasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fiborec(int index, int n, int c)
{
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (c);
	}
	if (index > 1)
	{
		return (ft_fiborec(index - 1, c, n + c));
	}
	return (-1);
}

int	ft_fibonacci(int index)
{
	return (ft_fiborec(index, 0, 1));
}
