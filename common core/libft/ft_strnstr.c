/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:12:06 by makassem          #+#    #+#             */
/*   Updated: 2026/04/29 15:32:29 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		s;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (i < len)
	{
		s = (int) i;
		while (little[j] == big[i + j] && little[j] && big[i + j] && i < len)
			j++;
		if (little[j] == '\0')
			return ((char *) &big[s]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main ()
{
	char s[12] = "salut ca va";
	char t[12] = "ut ca";
	printf("%s\n", ft_strnstr(s, t, 11));
	return(0);
}
*/
