/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 00:39:53 by malek             #+#    #+#             */
/*   Updated: 2026/05/11 11:12:39 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_longhexadecimal(unsigned long n, char c)
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
		count = count + ft_longhexadecimal(n / 16, c);
	ft_putchar(tab[n % 16]);
	count++;
	return (count);
}

int ft_pointer(void *p)
{
    int c;
    
    if (!p)
    {   ft_putstr("(nil)");
        return (5);
    }
    c = 0;
    ft_putchar('0');
    c++;
    ft_putchar('x');
    c++;    
    c = c + ft_longhexadecimal((unsigned long) p, 'x');
    return (c);
}