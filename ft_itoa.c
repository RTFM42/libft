/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:53:32 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/05 21:42:59 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		nc;
	int		flag;
	char	*ret;

	len = 0;
	flag = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	nc = n;
	while (flag || n)
	{
		flag = 0;
		n /= 10;
		len++;
	}
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	n = nc;
	if (n < 0)
		*ret++ = '-';
	while (
}
