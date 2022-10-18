/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:15:23 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/13 12:57:36 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    if (s)
    {
    while(s[i])
        {
            write(fd,&s[i],sizeof(s[i]));
            i++; 
        }
    } 
}