/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:38:24 by makassem          #+#    #+#             */
/*   Updated: 2026/04/27 11:14:01 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t						i;
	unsigned char				*b;
	unsigned char				*a;

	i = 0;
	a = (unsigned char *) dest;
	b = (unsigned char *) src;
	if (src > dest)
	{
		while (i < n)
		{
			a[i] = b[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			a[n] = b[n];
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char s[14] = "salut c malek";
	int n;
	n = 10;
	char a[n];
	ft_memmove(a, s, n);
	printf("%s\n", a);
	return(0);
}
*/
