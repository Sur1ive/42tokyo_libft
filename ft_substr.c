/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:37:05 by yxu               #+#    #+#             */
/*   Updated: 2023/10/01 19:51:40 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*substr;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start >= slen)
		len = 0;
	else if (len > slen - start)
		len = slen - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	substr[len] = '\0';
	while (len-- > 0)
		substr[len] = s[start + len];
	return (substr);
}
