/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 22:45:53 by malek             #+#    #+#             */
/*   Updated: 2026/05/11 01:19:39 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	typecheck(char s, va_list *list)
{
	int	c;

	c = 0;
	if (s == 'x' || s == 'X')
		c = c + ft_hexadecimal(s, (unsigned int) va_arg (*list, int));
	else if (s == '%')
		c = c + ft_putchar('%');
	else if (s == 'c')
		c = c + ft_putchar(va_arg (*list, int));
	else if (s == 'd' || s == 'u' || s == 'i')
		c = c + ft_putnbr((long) va_arg (*list , int));
	else if (s == 's')
		c = c + ft_putstr(va_arg (*list, char *));
	else if (s == 'P')
		c = c + ft_pointer(va_arg (*list, void *));
	else 
		c = c + ft_putchar(s);
	return (c);
}

int ft_printf(const char *s, ...)
{
    va_list	list;
	int	c;
	int	i;
	
	i = 0;
	c = 0;
	va_start(list, s);

	while (s[i])
	{
		if (s[i] == '%')
		{
			c = c + typecheck(s[i + 1], &list);
			i++;
		}
		else
		{
			c = c + ft_putchar(s[i]);
			i++;
		}
	}
	va_end(list);
	return (c);
}