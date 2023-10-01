/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:41:57 by yxu               #+#    #+#             */
/*   Updated: 2023/10/01 22:41:06 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	len_needle = ft_strlen(needle);
	while (*haystack && len >= len_needle)
	{
		if (!ft_strncmp(haystack, needle, len_needle))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
