/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:16:37 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/10 14:24:06 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	is_include(const char *s, const char find)
{
	while (*s != '\0')
		if (*s++ == find)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*s2 = s1;
	char		*ret;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	while (*s2 != '\0' && *(s2 + 1) != '\0')
		s2++;
	while (*s1 != '\0' && is_include(set, *s1))
		s1++;
	while (s2 > s1 && is_include(set, *s2))
		s2--;
	if (s2 > s1 || (*s2 != '\0' && *(s2 + 1) != '\0')
		|| (*s1 != '\0' && *(s2 - 1)))
		len = s2 - s1 + 2;
	else
		len = 1;
	ret = (char *)malloc(len);
	if (ret == 0x0)
		return (0);
	ft_bzero(ret, len);
	if (len - 1)
		ft_memcpy(ret, s1, s2 - s1 + 1);
	return (ret);
}
