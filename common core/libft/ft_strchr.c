/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:48:59 by makassem          #+#    #+#             */
/*   Updated: 2026/04/22 17:55:52 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	a;

	i = 0;
	while (s[i])
	{
		a = s[i];
		if (a == c)
		{
			return (s[i]);
		}
		i++;
	}
	return (NULL);
}
#include <stdio.h>
int main()
{
	char s[10] = "bonjour !";
	printf("%s", ft_strchr(s, 'j'));
	return(0);
}
