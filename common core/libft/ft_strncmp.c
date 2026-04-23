/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:01:03 by makassem          #+#    #+#             */
/*   Updated: 2026/04/23 10:41:17 by makassem         ###   ########.fr       */
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
		a = s1[i] + a;
		b = s2[i] + b;
		i++;
	}
	if (a > b)
		flag = 1;
	if (a < b)
		flag = -1;
	if (a == b)
		flag = 0;
	return (flag);
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
