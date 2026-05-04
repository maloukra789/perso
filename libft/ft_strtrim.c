/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:29:02 by makassem          #+#    #+#             */
/*   Updated: 2026/05/04 20:59:07 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char const s1, char const *set)
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
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	while (isset(s1[i], set) == 1 && s1[i] != '\0')
		i++;
	start = i;
	i = ft_strlen(s1);
	while (i > start && isset(s1[i - 1], set) == 1)
		i--;
	s = malloc(sizeof(char) * ((i - start) + 1));
	if (!s)
		return (NULL);
	while (j < (i - start))
	{
		s[j] = s1[start + j];
		j++;
	}
	s[j] = '\0';
	return (s);
}

/*
#include <stdio.h>
int main()
{
	const char	*s = {"zzzzzzzzzmalekcmoifrrozzzzzzzz"};
	const char	*set = {"z"};

	printf("%s\n", ft_strtrim(s, set));
	return (0);
}
	*/
