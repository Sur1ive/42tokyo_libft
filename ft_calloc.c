/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:23:24 by yxu               #+#    #+#             */
/*   Updated: 2023/09/20 20:52:21 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	i;

	mem = (void *)malloc(size * count);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < size * count)
		((unsigned char *)mem)[i++] = 0;
	return (mem);
}
