/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:27:19 by makassem          #+#    #+#             */
/*   Updated: 2026/04/23 15:01:04 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char s[14] = "salut c malek";
	int n;
	n = 5;
	char a[n];
	ft_memcpy(a, s, n);
	printf("%s\n", a);
	return(0);
}
*/