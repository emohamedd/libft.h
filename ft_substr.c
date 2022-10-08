/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:07:08 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/06 22:07:09 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"  

char *ft_substr(char const *s, unsigned int start,size_t len)
{
size_t i;
size_t y; 
char *str;

str = (char *)malloc(sizeof(char) * (len + 1));
    if(!str || !s)
return NULL;

i = 0;
y = 0;
while (s[i])
{
    if(i >= start && y < len)
    {
        str[y] = s[i];
        y++; 
    }
    i++;
}
    str[y] = 0;
    return str;
}