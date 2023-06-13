/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:55:29 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/13 19:56:07 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (NULL);
	while (start--)
	{
		if (*s == '\0')
		{
			ret = malloc(sizeof(char));
			if (!ret)
				return (NULL);
			*ret = '\0';
			return (ret);
		}
		s++;
	}
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	ret = malloc(len + sizeof(char));
	if (!ret)
		return (0);
	ft_bzero(ret, len + sizeof(char));
	ft_memcpy(ret, s, len);
	return (ret);
}
