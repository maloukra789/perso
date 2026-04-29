/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:29:02 by makassem          #+#    #+#             */
/*   Updated: 2026/04/29 15:35:07 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isset(char const s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		l;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	l = ft_strlen(s1);
	while (isset(s1[i], set) == 1)
		i++;
	start = i;
	i = l;
	while (isset(s1[i - 1], set) == 1)
		i--;
	s = malloc(sizeof(char) * ((i - start)));
	if (!s)
		return (NULL);
	while (j < (i - start))
	{
		s[j] = s1[start + j];
		j++;
	}
	return (s);
}


#include <stdio.h>
int main()
{
	const char	*s = {"zzzzzzzzzmalekcmoifrrozzzzzzzz"};
	const char	*set = {"z"};

	printf("%s\n", ft_strtrim(s, set));
	return (0);
}

