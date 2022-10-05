/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:10:28 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/04 21:25:50 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	if(!n)
		return (0);

	while ((s1[i] || s2[i]) && i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char )s1[i] - (unsigned char )s2[i]);
}
	