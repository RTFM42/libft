/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:08:33 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/11 15:15:51 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	**split_allocate(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**ret;

	j = 1;
	while (*s != '\0')
	{
		i = 0;
		while (*s == c && *s != '\0')
			s++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i != 0)
			j++;
		s += i;
	}
	ret = malloc(sizeof(char *) * j);
	if (!ret)
		return (NULL);
	i = 0;
	while (j--)
		ret[i++] = NULL;
	return (ret);
}

char	**split_in(char **ret, const char *s, char c)
{
	size_t		i[2];

	i[1] = 0;
	while (*s != '\0')
	{
		i[0] = 0;
		while (*s == c && *s != '\0')
			s++;
		while (s[i[0]] != c && s[i[0]] != '\0')
			i[0]++;
		if (i[0] != 0)
		{
			ret[i[1]] = ft_calloc(sizeof(char), i[0] + 1);
			if (ret[i[1]] == NULL)
			{
				while (--i[1])
					free(ret[i[1]]);
				free(ret);
				return (NULL);
			}
			ft_memcpy(ret[i[1]++], s, i[0]);
		}
		s += i[0];
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char		**ret;

	if (s == NULL)
		return (NULL);
	ret = split_allocate(s, c);
	if (ret == NULL)
		return (NULL);
	ret = split_in(ret, s, c);
	return (ret);
}
