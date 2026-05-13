/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 22:45:53 by malek             #+#    #+#             */
/*   Updated: 2026/05/12 09:21:31 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	typecheck(char s, va_list *list)
{
	int	c;

	c = 0;
	if (s == 'x' || s == 'X')
		c = c + ft_hexadecimal((unsigned int) va_arg (*list, int), s);
	else if (s == '%')
		c = c + ft_putchar('%');
	else if (s == 'c')
		c = c + ft_putchar(va_arg (*list, int));
	else if (s == 'd' || s == 'i')
		c = c + ft_putnbr((long) va_arg (*list, int));
	else if (s == 'u')
		c = c + ft_unsputnbr((unsigned long) va_arg (*list, unsigned int));
	else if (s == 's')
		c = c + ft_putstr(va_arg (*list, char *));
	else if (s == 'p')
		c = c + ft_pointer(va_arg (*list, void *));
	else
		c = c + ft_putchar(s);
	return (c);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		c;
	int		i;

	i = 0;
	c = 0;
	va_start(list, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			c = c + typecheck(s[i + 1], &list);
			i = i + 2;
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
\
