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

#include "ft_printf.h"

static int	ft_format(const char *format, va_list ap)
{
	int	c;

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
	if (*format == 'X')
		c += ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	if (*format == 'x')
		c += ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef");
	if (*format == 'p')
		c += ft_printptr(va_arg(ap, void *));
	return (c);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		c;

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

/*
#include <stdio.h>
#include <limits.h>
int main(void)
{
	char *string = NULL;
 	char c = 'c';
//   int	a = INT_MIN;
 	int b = INT_MIN;
 	int e = -10;
 	// int f = 5;
 	// unsigned int d = 0;
int	result;
int original;
 	char str[] = "a %%maria";
 	int *ptr = NULL;
 	printf("%%s TEST:\n");
 	result = ft_printf("c: a %s estuda\n", string);
 	original = printf("o: a %s estuda\n", string);
 	printf("printed %d characters.\n", result);
 	printf("printed %d characters.\n", original);
 	printf("\n%%c TEST:\n");
 	result = ft_printf("c: %c e %i\n", c, b);
 	original = printf("o: %c e %i\n", c, b);
 	printf("printed %d characters.\n", result);
 	printf("printed %d characters.\n", original);
printf("\n%%d TEST:\n");
result = ft_printf("c: %d\n", 0);
original = printf("o: %d\n", 0);
printf("printed %d characters.\n", result);
printf("printed %d characters.\n", original);
 	printf("\n%%i TEST:\n");
 	result = ft_printf("c: %i\n", b);
 	original = printf("o: %i\n", b);
 	printf("printed %d characters.\n", result);
 	printf("printed %d characters.\n", original);
 printf("\n%%u TEST:\n");
 	result = ft_printf("c: %u\n", 0);
 	original = printf("o: %u\n", 0);
 	printf("printed %d characters.\n", result);
 	printf("printed %d characters.\n", original);
 	result = ft_printf("c: %u\n", -1);
 	original = printf("o: %u\n", -1); 
 	printf("printed %d characters.\n", result);
 	printf("printed %d characters.\n", original);
 	printf("\n%%X AND %%x TEST:\n");
 	result = ft_printf("c: %x\n", e);
 	original = printf("o: %x\n", e);
 	printf("printed %d characters.\n", result);
 	printf("printed %d characters.\n", original);
 	result = ft_printf("c: %X\n", e);
 	original = printf("o: %X\n", e);
 	printf("printed %d characters.\n", result);
 	printf("printed %d characters.\n", original);
 	printf("\n%% TEST:\n");
 	result = ft_printf("c: %s\n", str);
 	original = printf("o: %s\n", str);
 	printf("printed %d characters.\n", result);
 	printf("printed %d characters.\n", original);
 	printf("\n%%p TEST:\n");
 	result = ft_printf("c: %p\n", ptr);
 	original = printf("o: %p\n", ptr);
 	printf("printed %d characters.\n", result);
 	printf("printed %d characters.\n", original);
}

int	main(void)
{
	char	c = 'p';
	char str[] = "testing";
	int	number = 6754;
	int	unumber = -6754;
	int	count;
	int original;

	count = ft_printf("c: %c %s %p %d %i %u %x %X %%\n", c, str, &str, number, number, unumber, -10, -10);
	original = printf("o: %c %s %p %d %i %u %x %X %%\n", c, str, &str, number, number, unumber, -10, -10);
	ft_printf("c: %d\n", count);
	printf("o: %d\n", original);
}*/
