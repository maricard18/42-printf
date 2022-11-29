/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:17:25 by maricard          #+#    #+#             */
/*   Updated: 2022/11/29 17:14:35 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsigned(unsigned int x)
{
	int		i;

	i = 0;
	if (x < 10)
	{
		i++;
		ft_putchar(x + '0');
	}
	else
	{
		ft_number(x / 10);
		ft_number(x % 10);
	}
	return (i);
}
