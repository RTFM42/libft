/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:16:46 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/21 04:01:51 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	const char	*b = (const char *)s;
	size_t		n;

	n = -1;
	while (++n < len)
		if (b[n] == (const char)c)
			return ((void *)&b[n]);
	return (0x0);
}
