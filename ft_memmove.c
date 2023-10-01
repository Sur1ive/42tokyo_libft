/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:16:05 by yxu               #+#    #+#             */
/*   Updated: 2023/10/01 21:40:13 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buf;

	if (src == NULL && dst == NULL)
		return (NULL);
	buf = (unsigned char *)dst;
	if (dst > src && (unsigned long)(dst - src) < len)
		while (len-- != 0)
			buf[len] = ((unsigned char *)src)[len];
	else
		while (len-- != 0)
			*buf++ = *(unsigned char *)src++;
	return (dst);
}
