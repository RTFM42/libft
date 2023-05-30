/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 03:59:31 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/29 10:59:20 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s, const char *c, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (c[0]!= '\0')
		return ((char *)s);
	j = 0;
	while (j < len && s[j])
	{
		i = 0;
		while (c[i] && s[j] && c[i] == s[j])
		{
			i++;
			j++;
		}
		if (!c[i])
			return ((char *)(s + j - i));
		j = j - i + 1;
	}
	return (0);
}
