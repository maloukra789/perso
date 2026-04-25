/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:22:02 by makassem          #+#    #+#             */
/*   Updated: 2026/04/25 15:48:48 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int     *ft_memcmp(const void *s1, const void *s2, size_t n)
{
        size_t      i;
        int     *a;
        int     *b;
        int     *flag;
        
        i = 0;
        flag = 0;
        a = (int *) s1;
        b = (int *) s2;
        while (i < n)
        {
                if (a[i] = b[i])
                        i++;
                if (a[i] < b[i])
                {
                        flag[0] = -1;
                        return (flag);
                }
                if (a[i] > b[i])
                {
                        flag[0] = 1;        
                        return (flag);
                }
        }
        return (flag);
}

#include <stdio.h>
int main ()
{
	char s[10] = "sblut c !";
	char t[10] = "salut c !";
	printf("%ls", ft_memcmp(s, t, 5));
	return(0);
}