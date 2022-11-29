/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:55:08 by maricard          #+#    #+#             */
/*   Updated: 2022/11/29 11:20:46 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexadecimal_x(unsigned long n, char c)
{
	int	len;

	len = 0;
	if (n <= 9)
	{
		len++;
		ft_putchar(n + 10);
	}
	if (c >= 16)
	{
		ft_hexadecimal_x(c / 16, c);
		ft_hexadecimal_x(c % 16, c);
	}
	else
	{	
		len = len + 2;
		ft_putchar(n - 10 + 'a');
	}
	return (len);
}
