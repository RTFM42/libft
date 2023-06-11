/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:05:52 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/21 04:02:57 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	const char	cc = (const char)c;

	while (*s != cc)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
