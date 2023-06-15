/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 03:59:31 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/11 15:15:32 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t slen)
{
	size_t	nlen;

	if (slen)
		ft_strlen(haystack);
	nlen = ft_strlen(needle);
	if (*needle != '\0')
	{
		if (slen < nlen)
			return (0);
		while (ft_strncmp(haystack, needle, nlen) != 0 && *haystack)
		{
			if (--slen < nlen)
				return (0);
			haystack++;
		}
		if (!*haystack)
			return (0);
	}
	return ((char *)haystack);
}
