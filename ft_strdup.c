/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:34:51 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/10 19:27:40 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ret;

	len = ft_strlen(s1) + sizeof(char);
	ret = (char *)malloc(len);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, len);
	return (ret);
}
