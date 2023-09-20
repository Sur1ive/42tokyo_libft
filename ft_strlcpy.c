/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 22:54:44 by yxu               #+#    #+#             */
/*   Updated: 2023/09/20 17:26:15 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	len;

	n = dstsize;
	len = 0;
	while (src[len] != '\0')
		len++;
	while (*src && (--n > 0))
		*dst++ = *src++;
	if (dstsize != 0)
		*dst = '\0';
	return (len);
}
