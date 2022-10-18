/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:47:46 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/18 16:15:46 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    count_word(char *s, char c)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    while (s[j])
    {
        while (s[j] && s[j] == c)
            j++;
        while (s[j] && s[j] != c)
            j++;
        while (s[j] && s[j] == c)
            j++;
        i++;
    }
    return (i);
}
static int    ft_len(char *s, char c)
{
    int    i;

    i = 0;
    while (s[i] && s[i] != c)
    {
        i++;
    }
    return (i);
}

char    **ft_split(char *s, char c)
{
    char    **ptr;
    int        len;
    int        j;

    if (!s)
    {
        return (NULL);
    }
    len = count_word(s, c);
    ptr = (char **)malloc(sizeof(char *) * (len + 1));
    if (!ptr)
        return (NULL);
    j = 0;
    while (*s && j < len + 1)
    {
        while (*s && *s == c)
        {
            s++;
        }
        if (*s && *s != c)
        {
            ptr[j] = ft_substr(s, 0, ft_len(s, c));
            j++;
        }
        while (*s && *s != c)
        {
            s++;
        }
    }
    ptr[j] = NULL;
    return (ptr);
}
#include <stdio.h>
int main()
{
    char x[] = "Amine zaml";
    char** words = ft_split(x ,32);
    while(*words)
    {
        printf("%s\n",*words);
        words++;
    }
}