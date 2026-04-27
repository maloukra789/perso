/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 14:48:54 by makassem          #+#    #+#             */
/*   Updated: 2026/04/27 17:44:46 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	lin;

	i = 0;
	len = ft_strlen(dst);
	lin = ft_strlen(src);
	if (size == 0)
		return (lin);
	if (size <= len)
		return(size + lin);
	while(src[i] && len + 1 < size)
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
		return(lin + len);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
    char dst [14]= "fonctionne";
    const char src []= "pls";
    size_t size = 3;
    size_t size1 = 3;
    int result = ft_strlcat(dst, src, size);
    int reresult = strlcat(dst,src,size1);
     printf("le vrai : %d\n%s\n", reresult, dst);
    printf("Le mien :%d\n%s\n", result, dst);
}
	*/
