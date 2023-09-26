/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:54:44 by yxu               #+#    #+#             */
/*   Updated: 2023/09/26 15:29:19 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	n = dstsize;
	while (*src && (--n > 0))
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}
