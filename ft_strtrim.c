/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:56:56 by yxu               #+#    #+#             */
/*   Updated: 2023/10/01 21:31:44 by yxu              ###   ########.fr       */
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

static int	trim_begin(char const *s1, char const *set)
{
	int	begin;
	int	i;

	begin = 0;
	i = 0;
	while (s1[i] && is_in(s1[i], (char *)set))
	{
		begin++;
		i++;
	}
	return (begin);
}

static int	trim_end(char const *s1, char const *set)
{
	int	end;
	int	i;

	end = ft_strlen((char *)s1);
	i = end - 1;
	while (i >= 0 && is_in(s1[i], (char *)set))
	{
		end--;
		i--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	begin = trim_begin(s1, set);
	end = trim_end(s1, set);
	if (end < begin)
		return ("");
	return (ft_substr(s1, begin, end - begin));
}
