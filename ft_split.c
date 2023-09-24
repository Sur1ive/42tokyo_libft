/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:12:33 by yxu               #+#    #+#             */
/*   Updated: 2023/09/22 15:23:23 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char c)
{
	int	flag;
	int	num_of_words;
	int	len;

	len = 0;
	num_of_words = 0;
	while (str[len] != '\0')
	{
		flag = 0;
		while (str[len] == c && str[len])
			len++;
		while (str[len] != c && str[len])
		{
			flag = 1;
			len++;
		}
		if (flag == 1)
			num_of_words += 1;
	}
	return (num_of_words);
}

static void	ft_split_sub(char **splited, char *str, char c)
{
	int		head;
	int		tail;
	int		j;

	tail = 0;
	head = 0;
	j = 0;
	while (str[tail] != '\0')
	{
		if (str[tail] == c)
		{
			if (tail > head)
				splited[j++] = ft_substr(str, head, tail - head);
			head = tail + 1;
		}
		tail++;
	}
	if (tail > head)
		splited[j++] = ft_substr(str, head, tail - head);
	splited[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		num_of_words;

	num_of_words = count_words((char *)s, c);
	splited = (char **)malloc((num_of_words + 1) * sizeof(char *));
	if (splited == NULL)
		return (NULL);
	ft_split_sub(splited, (char *)s, c);
	while (num_of_words > 0)
	{
		if (splited[num_of_words-- - 1] == NULL)
			return (NULL);
	}
	return (splited);
}
