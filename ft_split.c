/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:08:33 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/05 05:35:49 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**ret;

	j = 1;
	while (*s != '\0')
	{
		i = 0;
		while (*s == c)
			s++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i != 0)
			j++;
		s += i;
	}
	ret = malloc(sizeof(char *) * j);
	if (ret == NULL)
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		i = 0;
		while (*s == c)
			s++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i != 0)
		{
			ret[j] = ft_calloc(i + 1);
			if (ret[j] == NULL)
			{
				while (--j)
					free(ret[j]);
				free(ret);
				return (NULL);
			}
			ft_memcpy(ret[j], s, i);
			j++;
		}
		s += i;
	}
	return (ret);
}
