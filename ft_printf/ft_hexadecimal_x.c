/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:55:08 by maricard          #+#    #+#             */
/*   Updated: 2022/11/29 12:23:29 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexadecimal_x(unsigned long n)
{
	int	len;

	len = 0;
	if (n <= 9)
	{
		len++;
		ft_putchar(n + '0');
	}
	if (n >= 16)
	{
		ft_hexadecimal_x(n / 16);
		ft_hexadecimal_x(n % 16);
	}
	if (n > 9 && n < 16)
	{	
		len = len + 2;
		ft_putchar(n - 10 + 'a');
	}
	return (len);
}
