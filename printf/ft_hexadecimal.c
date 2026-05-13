/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:31:13 by malek             #+#    #+#             */
/*   Updated: 2026/05/12 09:20:23 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int n, char c)
{
	char	*tab;
	int		count;

	count = 0;
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	tab = NULL;
	if (c == 'x')
		tab = "0123456789abcdef";
	if (c == 'X')
		tab = "0123456789ABCDEF";
	if (n >= 16)
		count = count + ft_hexadecimal(n / 16, c);
	ft_putchar(tab[n % 16]);
	count++;
	return (count);
}
