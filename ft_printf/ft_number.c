/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:17:25 by maricard          #+#    #+#             */
/*   Updated: 2022/11/29 18:50:22 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_number(int x)
{
	size_t	nb;
	int		i;

	nb = x;
	i = 0;
	if (x < 0)
	{
		i++;
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_number(nb / 10);
		ft_number(nb % 10);
	}
	return (i);
}
