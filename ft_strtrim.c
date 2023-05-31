/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:16:37 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/31 23:24:23 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	size_t		len;
	char		*ret;

	while (*s1 && is_include(set, *s1))
		s1++;
	printf("%s", s1);
	while (*s2 != '\0' && *s2 + 1 != '\0')
		s2++;
	while (s1 <= s2 && is_include(set, *s2))
		s2--;
	len = s2 - s1;
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (0);
	*(ret + len) = '\0';
	memcpy(ret, s1, len);
	return (ret);
}

int	main(void)
{
	printf("%s", ft_strtrim("hello world", "world"));
}
