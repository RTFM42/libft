/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:48:05 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/20 18:09:43 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	int		i;
	size_t	j;

	if (*s == '\0')
		return ((char *)s);
	j = 0;
	while (j < len && *s)
	{
		i = 0;
		while (s[i] && find[i] && s[i] == find[i])
			i++;
		if (find[i] == '\0')
			return ((char *)s);
		s++;
	}
	return (0);
}
