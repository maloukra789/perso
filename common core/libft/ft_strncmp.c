/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:01:03 by makassem          #+#    #+#             */
/*   Updated: 2026/04/27 11:16:11 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char s1[], const char s2[], size_t n)
{
	size_t	i;
	int		a;
	int		b;
	int		flag;

	i = 0;
	a = 0;
	b = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((s1[i] - s2[i]));
	}
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
