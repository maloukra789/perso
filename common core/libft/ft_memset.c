/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:18:10 by makassem          #+#    #+#             */
/*   Updated: 2026/04/22 15:38:21 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*r;

	r = s;
	i = 0;
	while (i < n)
	{
		r[i] = (unsigned char) c;
		i++;
	}
	return (r);
}
/*
#include <stdio.h>
int main()
{
	char s[12] = "salut ca va";
	printf("%s\n", s);
	ft_memset(s, '0', 3);
	printf("%s\n", s);
	return (0);
}
*/
