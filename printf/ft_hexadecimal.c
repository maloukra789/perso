/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.count                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:31:13 by malek             #+#    #+#             */
/*   Updated: 2026/05/11 00:05:18 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int ft_hexadecimal(unsigned int n, char c)
{
    char	*tab;
	int		count;
	
	count = 0;
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