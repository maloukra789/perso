/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:19:36 by makassem          #+#    #+#             */
/*   Updated: 2026/04/25 12:58:25 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (a == s[i])
		{
			return ((char *) &s[i]);
		}
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char *s = "abcdbcdrjuybcd";
	printf("%s", ft_strrchr(s, 'j'));
	return(0);
}
*/