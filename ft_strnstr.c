/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:41:57 by yxu               #+#    #+#             */
/*   Updated: 2023/09/20 20:11:51 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*h_tmp;
	const char	*n_tmp;
	size_t		len_tmp;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len != 0)
	{
		if (*haystack == *needle)
		{
			h_tmp = haystack;
			len_tmp = len;
			n_tmp = needle;
			while (*h_tmp && *n_tmp && *h_tmp == *n_tmp && len_tmp-- != 0)
			{
				h_tmp++;
				n_tmp++;
			}
			if (*n_tmp == '\0')
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
