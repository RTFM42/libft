/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:16:46 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/20 18:07:06 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*b = (const unsigned char *)s;
	size_t				count;

	count = 0;
	while (*b && count++ < n)
		if (*b++ == c)
			return ((void *)b);
	return ((void *)0);
}
