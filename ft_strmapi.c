/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:04:34 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/10 14:28:30 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ret;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	ret = ft_calloc(i + 1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		ret[i] = f(i, *s++);
		i++;
	}
	return (ret);
}
