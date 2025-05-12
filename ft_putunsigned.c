/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:55:50 by jpedro-g          #+#    #+#             */
/*   Updated: 2025/04/23 16:05:32 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunsigned(unsigned int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	return (n);
}
