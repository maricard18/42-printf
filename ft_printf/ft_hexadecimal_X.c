/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_X.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:21:07 by maricard          #+#    #+#             */
/*   Updated: 2022/11/29 12:26:25 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexadecimal_X(unsigned long n)
{
	int len;

	len = 0;
	if (n <= 9)
	{
		len++;
		ft_putchar(n + '0');
	}
	if (n >= 16)
	{
		ft_hexadecimal_X(n / 16);
		ft_hexadecimal_X(n % 16);
	}
	if (n > 9 && n < 16)
	{
		len = len + 2;
		ft_putchar(n - 10 + 'A');
	}
	return (len);
}
