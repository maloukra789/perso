/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 14:48:54 by makassem          #+#    #+#             */
/*   Updated: 2026/04/30 16:11:01 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		return (size + lin);
	while (src[i] && len < size - 1 - ft_strlen(dst))
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (lin + len);
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
