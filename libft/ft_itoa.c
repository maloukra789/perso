/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:52:02 by makassem          #+#    #+#             */
/*   Updated: 2026/05/04 17:04:06 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static char	*forintmin(char *tab)
{
	tab[0] = '-';
	tab[1] = '2';
	tab[2] = '1';
	tab[3] = '4';
	tab[4] = '7';
	tab[5] = '4';
	tab[6] = '8';
	tab[7] = '3';
	tab[8] = '6';
	tab[9] = '4';
	tab[10] = '8';
	tab[11] = '\0';
	return (tab);
}

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


	if (n == -2147483648)
	{
		tab = malloc(sizeof(char) * 12);
		return (forintmin(tab));
	}
	if (n == 0)
	{
		tab = malloc(sizeof(char) * 2);
		tab[0] = '0';
		tab[1] = '\0';
		return (tab);
	}
	nbr = n;
	digit = 0;
	if (n < 0)
		digit = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		digit++;
	}
	tab = malloc(sizeof(char) * (digit + 1));
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
	int n = 0;
	printf("%s", ft_itoa(n));
	return(0);
}
	*/

