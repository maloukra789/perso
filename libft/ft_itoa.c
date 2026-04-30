/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:52:02 by makassem          #+#    #+#             */
/*   Updated: 2026/04/30 10:16:17 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copynb(char *tab, int digit, int n)
{
	while (n > 0 && digit >= 0)
	{
		tab[digit] = (n % 10) + '0';
		n = n / 10;
		digit--;
	}
	return (tab);
}

char	*ft_itoa(int n)
{
	int		digit;
	char	*tab;
	int		nbr;

	nbr = n;
	digit = 0;
	if (n < 0)
		digit = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		digit++;
	}
	tab = malloc(sizeof(char) * digit + 1);
	if (!tab)
		return (NULL);
	tab[digit] = '\0';
	digit--;
	if (n < 0)
	{
		tab[0] = '-';
		n = -n;
	}
	copynb(tab, digit, n);
	return (tab);
}
/*
#include <stdio.h>
int main ()
{
	int n =-1;
	printf("%s", ft_itoa(n));
	return(0);
}
*/
