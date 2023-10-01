/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:23:24 by yxu               #+#    #+#             */
/*   Updated: 2023/10/01 20:09:45 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	mem = (void *)malloc(size * count);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, size * count);
	return (mem);
}
