/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:56:00 by emohamed          #+#    #+#             */
/*   Updated: 2022/10/10 17:49:39 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst >= src)
		while (len--)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
