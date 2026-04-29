/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:52:02 by makassem          #+#    #+#             */
/*   Updated: 2026/04/29 18:37:29 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nb)
{
	int		a;
	char	*tab;
	int		n;
	int		g;

	n = nb;
	a = 0;
	if (nb < 0)
		a = 1;
	while (n != 0)
	{
		n = n / 10;
		a++;
	}
	tab = malloc(sizeof(char) * a + 1);
	tab[a] = '\0';
	a--;
	if (nb < 0)
	{
		tab[0] = '-';
		nb = -nb;
	}
	while (nb > 0 && a > 0)
	{
		tab[a] = (nb % 10) + '0';
		nb = nb / 10;
		a--;
	}
	return (tab);
}
int main ()
{
	int nb = -1364782;
	printf("%s", ft_itoa(nb));
	return(0);
}
