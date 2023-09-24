/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:56:56 by yxu               #+#    #+#             */
/*   Updated: 2023/09/22 14:53:23 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char a, char *str)
{
	while (*str)
	{
		if (a == *str)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		i;

	len = ft_strlen((char *)s1);
	i = 0;
	while (s1[i])
		if (is_in(s1[i++], (char *)set))
			len--;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (!is_in(s1[i], (char *)set))
			*str++ = s1[i];
		i++;
	}
	*str = '\0';
	return (&str[-len]);
}
