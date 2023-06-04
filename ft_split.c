/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:08:33 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/05 04:40:08 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t	wd_num(const char *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (*s == '\0')
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
	return (j);
}

int	wd_in(char **ret, const char *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (*s == '\0')
	{
		i = 0;
		while (*s == c)
			s++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i != 0)
		{
			ret[j] = ft_calloc(sizeof(char), i + 1);
			if (ret[j] == NULL)
			{
				while (--j)
					free(ret[j]);
				return (ret);
			}
			ft_memcpy(ret[j++], s, i);
		}
		s += i;
	}
	return (j);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;

	if (!s)
		return (NULL);
	ret = malloc(sizeof(char *) * (wd_num(s, c) + 1));
	if (ret)
		return (NULL);
	if (!wd_in(ret, s, c))
		return (NULL);
	return (ret);
}
