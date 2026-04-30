/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:19:38 by makassem          #+#    #+#             */
/*   Updated: 2026/04/30 15:16:11 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	yo;

	sign = 1;
	i = 0;
	yo = 0;

	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		yo = yo * 10 + (nptr[i] - '0');
		i++;
	}


	return (yo * sign);
}

/*
#include <stdio.h>
int main()
{
	char *s = {"113"};
	printf("%d", ft_atoi(s));
	return(0);
}
*/
