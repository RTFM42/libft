/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 03:59:31 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/21 04:03:56 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *c, size_t len)
{
	unsigned int		i;
	unsigned int		j;

	if (c[0] == '\0')
		return ((char *)s);
	i = 0;
	while (s[i] && i < len)
	{
		j = 0;
		if (s[i] == c[j])
		{
			while (i + j < len && s[i + j] == c[j])
			{
				j++;
				if (!c[j])
					return ((char *)&s[i]);
			}
		}
		i++;
	}
	return (0);
}
