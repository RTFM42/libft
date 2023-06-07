/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:53:32 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/07 14:47:08 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

char	*itoa_alloc(int n)
{
	char	*ret;
	int		i;
	int		f;

	f = 1;
	i = 0;
	if (n < 0)
		if (++i)
			n *= -1;
	while (n || f)
	{
		f = 0;
		n /= 10;
		i++;
	}
	ret = ft_calloc(++i, sizeof(char));
	return (ret);
}

void	strrev(char	*str)
{
	char	*start;
	char	tmp;

	start = str;
	while (*str != '\0' && *(str + 1) != '\0')
		str++;
	while (str >= start)
	{
		tmp = *start;
		*start++ = *str;
		*str-- = tmp;
	}
}

char	*ft_itoa(int n)
{
	char	*ret;
	char	*res;
	int		i;
	int		f;

	n *= 1;
	i = 0;
	ret = itoa_alloc(n);
	res = ret;
	if (ret == NULL)
		return (NULL);
	if (n < 0 && n != -0 && n != +0)
	{
		*ret++ = '-';
		n *= -1;
	}
	while (n || f)
	{
		f = 0;
		ret[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	strrev(ret);
	return (res);
}
