/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:44:27 by yxu               #+#    #+#             */
/*   Updated: 2023/09/20 17:32:43 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = 0;
	dst_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst[dst_len] != '\0')
		dst_len++;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	dst += dst_len;
	dstsize -= dst_len;
	while (*src && dstsize-- != 1)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}
