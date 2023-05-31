/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:55:29 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/31 18:01:26 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	ret = malloc(len + sizeof(char));
	if (!ret)
		return (0);
	while (len--)
		s++;
	ft_bzero(ret, len + sizeof(char));
	ft_memcpy(ret, s, len);
	return (ret);
}
