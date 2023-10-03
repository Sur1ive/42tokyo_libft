/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:21:15 by yxu               #+#    #+#             */
/*   Updated: 2023/10/03 18:24:57 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	next_num(long num, int n, int sign)
{
	if (sign == -1 && (-num < LONG_MIN / 10
			|| (-num == LONG_MIN / 10 && n >= -(LONG_MIN % 10))))
		return (LONG_MIN);
	else if (sign == 1 && (num > LONG_MAX / 10
			|| (num == LONG_MAX / 10 && n >= LONG_MAX % 10)))
		return (LONG_MAX);
	num *= 10;
	num += n;
	return (num);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && num != LONG_MIN && num != LONG_MAX)
	{
		num = next_num(num, *str - '0', sign);
		str++;
	}
	return (num * sign);
}
