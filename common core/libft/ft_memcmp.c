/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:22:02 by makassem          #+#    #+#             */
/*   Updated: 2026/04/23 18:28:00 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int memcmp(const void s1[.n], const void s2[.n], size_t n)
{
        int i;
        
        i = 0;
        while (i < n)
        {
                if (s1[i]] = s2[i])
                        i++;
                if (s1[i] < s2[i])
                        return(-1)
                if (s1[i] > s2[i])
                        return(1)
        }
        return(0);
}

