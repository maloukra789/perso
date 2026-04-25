/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:12:06 by makassem          #+#    #+#             */
/*   Updated: 2026/04/25 15:18:35 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (big[i])
    {
        if (big[i] = little[j])
        {   while (little[j])
            {
                if(little[j] = big[i])
                    i++;
                    j++;
            }
                    reutrn    
                    
            }
    }
}