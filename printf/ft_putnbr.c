/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:47:23 by malek             #+#    #+#             */
/*   Updated: 2026/05/12 09:21:53 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		c = c + ft_putchar('-');
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		c = c + ft_putchar(n + '0');
	}
	else
	{
		c = c + ft_putnbr(n / 10);
		c = c + ft_putnbr(n % 10);
	}
	return (c);
}
