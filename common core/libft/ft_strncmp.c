/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 19:01:03 by makassem          #+#    #+#             */
/*   Updated: 2026/04/29 15:41:21 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char s1[], const char s2[], size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((s1[i] - s2[i]));
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
