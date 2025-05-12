/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:01:07 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/05/05 14:02:20 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_format(const char *format, va_list ap)
{
	int c;

	c = 0;

	if (*format == '%')
		c += ft_putchar('%');
	if (*format == 'c')
		c += ft_putchar(va_arg(ap, int));
	if (*format == 's')
		c += ft_putstr(va_arg(ap, char *));
	if (*format == 'd' || *format == 'i')
		c += ft_putnbr(va_arg(ap, int));
	if (*format == 'u')
		c += ft_putunsigned(va_arg(ap, int));
	if (*format == 'x')
		c += ft_puthex(va_arg(ap, int));
	return(c);
}


int	ft_printf(const char *format, ...)
{
	va_list ap;
	int	i;
	int	c;

	va_start(ap, format);

	i = 0;
	c = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			c += ft_format(&format[i], ap);
		}
		else
		{
			ft_putchar(format[i]);
			c++;
		}
		i++;
	}
	va_end(ap);
	return (c);
}


#include <stdio.h>
int	main(void)
{
	char *s = "Hello World!";
	int c = ft_printf("%s\n", s);
	ft_printf("%d\n", c);

	int d = printf("%s\n", s);
	printf("%d\n", d);
}
