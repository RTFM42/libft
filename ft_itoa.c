/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:53:32 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/05 18:18:53 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	char	*ret;
	int		len;

	len = intlen(n);
	res = ft_calloc(sizeof(char), len + 1);
	if (!res)
		return (NULL);
	ret = res;
	if (n == 0)
	{
		*ret = '0';
		return (ret);
	}
	if (n < 0)
	{
		n *= -1;
		*res++ = '-';
		len--;
	}
	while (len)
	{
		ret[--len] = '0' + n / 10;
		n = n / 10;
	}
	return (ret);
}
