/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:30:14 by maricard          #+#    #+#             */
/*   Updated: 2022/11/29 18:46:52 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//C libraries
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

//Funcrion Prototypes
int		ft_printf(const char *str, ...);
int		ft_char(int c);
int		ft_number(int x);
int		ft_string(char *str);
int		ft_unsigned(unsigned int x);
int		ft_hexadecimal(unsigned long n);
int		ft_hexadecimal_x(unsigned long n);
int		ft_pointer(unsigned long long k);
void	ft_putchar(char c);
size_t	ft_strlen(const char *str);

#endif
