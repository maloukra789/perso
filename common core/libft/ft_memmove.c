/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:38:24 by makassem          #+#    #+#             */
/*   Updated: 2026/04/23 16:54:50 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t						i;
	unsigned const char			*b;
	unsigned char	*a;
	char	*t;

	i = 0;
	a = dest;
	b = src;
	while (i < n)
	{
		t[i] = b[i];
		i++; 
	}
	i = 0;
	while (i < n)
	{
		t[i] = a[i];
		i++;
	}
	return(dest);
	t[n] = '\0';
}
#include <stdio.h>
int main()
{
	char s[14] = "salut c malek";
	int n;
	n = 5;
	char a[n];
	ft_memmove(a, s, n);
	printf("%s\n", a);
	return(0);
}
	
	