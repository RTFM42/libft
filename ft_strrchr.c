/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:56:12 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/21 03:09:17 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;
	char	cc;
	char	*last;

	ss = (char *)s;
	cc = (char)c;
	last = (void *)0;
	while (*ss != '\0')
		if (*ss++ == cc)
			last = ss - 1;
	if (cc == '\0')
		last = ss;
	return (last);
}
