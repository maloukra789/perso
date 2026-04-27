/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:22:02 by makassem          #+#    #+#             */
/*   Updated: 2026/04/27 10:32:38 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int						i;
	int						j;
	unsigned const char		*a;
	unsigned const char		*b;

	i = 0;
	a = s1;
	b = s2;
	j = (int) n;
	if (n == 0)
		return (0);
	while (i < j)
	{
		if (a[i] == b[i])
			i++;
		else
			return (a[i] - b[i]);
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	char s[10] = "s1lut c !";
	char t[10] = "sZlut c !";
	printf("%d", ft_memcmp(s, t, 5));
	return(0);
}
*/
