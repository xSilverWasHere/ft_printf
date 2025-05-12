/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:35:29 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/05/12 12:37:11 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned int n);

#endif
