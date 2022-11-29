/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:35:09 by maricard          #+#    #+#             */
/*   Updated: 2022/11/29 14:23:02 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_format(va_list *args, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = len + ft_char(va_arg(*args, int));
	if (c == 's')
		len = len + ft_string(va_arg(*args, char *));
	if (c == 'd' || c == 'i')
		len = len + ft_number(va_arg(*args, int));
	if (c == 'x')
		len = len + ft_hexadecimal(va_arg(*args, unsigned int));
	if (c == 'X')
		len = len + ft_hexadecimal_x(va_arg(*args, unsigned int));
	if (c == 'u')
		len = len + ft_unsigned(va_arg(*args, int));
	if (c == '%')
	{
		len++;
		ft_putchar('%');
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start (args, str);
	len = ft_strlen (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len = len + ft_format(&args, str[i + 1]);
			i++;
		}
		else
		{
			len++;
			ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	printf("----PRINTF----\n");
	printf("--------------\n");
	printf("ola %X %c %d %c\n", 2, 'o', -432, 6);
	printf("Char numbers | \n");
	printf("\n");
	printf("--FT_PRINTF--\n");
	printf("-------------\n");
	ft_printf("ola %X %c %d %c\n", 2, 'o', -432, 6);
}	
