/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:27:19 by makassem          #+#    #+#             */
/*   Updated: 2026/04/22 14:36:51 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	unsigned const char	*b;

	b = src;
	a = dest;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
/*
int main()
{
	char s[14] = "salut c malek";
	int n;
	n = 15;
	char a[n];
	ft_memcpy(a, s, n);
	printf("%s", a);
	return(0);
}
*/
