/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 14:48:54 by makassem          #+#    #+#             */
/*   Updated: 2026/05/04 13:17:12 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	if (size <= lendst)
		return (size + lensrc);
	while (src[i] != '\0' && (lendst + i + 1) < size)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lensrc + lendst);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
    char *dst = "CCCCCAAAAAAAAA";
    const char * src= "AAAAAAAAA";
    size_t size = 3;
    size_t size1 = 3;
    int result = ft_strlcat(dst, src, size);
    int reresult = strlcat(dst,src,size1);
     printf("le vrai : %d\n%s\n", reresult, dst);
    printf("Le mien :%d\n%s\n", result, dst);
}*/
