/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:01:03 by makassem          #+#    #+#             */
/*   Updated: 2026/05/04 11:48:24 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char s1[], const char s2[], size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	while (i < n)
	{
		if (a[i] == b[i])
			i++;
		else
			return ((a[i] - b[i]));
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	char s[10] = "sblut c !";
	char t[10] = "salut c !";
	printf("%d", ft_strncmp(s, t, 5));
	return(0);
}
*/
