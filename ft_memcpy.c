/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:24:40 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/21 15:29:12 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
#include <stdio.h>
int main()
{

	int s[5] = {1,2,3,4,5};
	int dst[5];
	ft_memcpy(dst, s,16);
	printf("%d", dst[3]);
	// while(i < n)
	// {
	// 	printf("%c",s[i]);
	// 	i++;
	// }
	
}