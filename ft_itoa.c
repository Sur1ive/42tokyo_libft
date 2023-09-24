/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:12:33 by yxu               #+#    #+#             */
/*   Updated: 2023/09/22 16:55:48 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(long num)
{
	if (num >= 10)
		return (numlen(num / 10) + 1);
	return (1);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*s;

	len = 0;
	num = n;
	if (n < 0)
	{
		num = -num;
		len += 1;
	}
	len += numlen(num);
	s = (char *)malloc(len + 1);
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	while (len-- > 0)
	{
		s[len] = '0' + num % 10;
		num = num / 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
