
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:06:50 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/06 22:06:51 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:48:14 by ael-khni          #+#    #+#             */
/*   Updated: 2021/11/10 09:22:16 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

 int	incrim(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		back;

	if (!s1)
		return (NULL);
	front = 0;
	back = ft_strlen(s1) - 1;
	while (s1[front] && incrim(s1[front], set))
		front++;
	while (back >= front && incrim(s1[back], set))
		back--;
	return (ft_substr(s1, front, (back - front + 1)));
}