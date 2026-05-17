/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 15:05:40 by makassem          #+#    #+#             */
/*   Updated: 2026/05/17 22:24:36 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	s = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s)
		return (NULL);
	j = 0;
	while (s1[j])
		s[i++] = s1[j++];
	j = 0;
	while (s2[j])
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*n;

	if (!s)
		return(NULL);
	if (start >= ft_strlen(s))
	{	
		n = malloc(sizeof(char) * 1);
		if (!n)
			return (NULL);
		n[0] = '\0';
		return (n);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	n = malloc(sizeof(char) * (len + 1));
	if (!n)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		n[i] = s[start + i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
