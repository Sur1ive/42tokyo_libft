/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:21:15 by yxu               #+#    #+#             */
/*   Updated: 2023/10/01 23:15:03 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	num;
	int					sign;

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
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (num < (unsigned long long)LONG_MIN)
		num = LONG_MIN;
	else if (num >= (unsigned long long)LONG_MAX)
		num = LONG_MAX;
	return (num * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	printf("origin: %d\n", atoi("  \t  -922337203685477580900"));
// 	printf("ft: %d\n", ft_atoi("  \t  -922337203685477580900"));
// }
