/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:19:38 by makassem          #+#    #+#             */
/*   Updated: 2026/04/27 18:08:15 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	yo;

	sign = 1;
	i = 0;
	yo = 0;
	while (nptr[i])
	{
		while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
			i++;
		if (nptr[i] == '-')
		{
			sign = -1;
		}
		if (nptr[i] >= '0' && nptr[i] <= '9')
		{
			yo = yo * 10 + (nptr[i] - '0');
		}
		i++;
	}
	return(yo * sign);
}

/*
#include <stdio.h>
int main()
{
	char *s = {"      535458abcd"};
	printf("%d", ft_atoi(s));
	return(0);
}
*/
