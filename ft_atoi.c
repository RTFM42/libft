/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:22:43 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/28 17:24:49 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_atoi(const char *str)
{
	long long	ret;
	int			sign;

	ret = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t'
		|| *str == '\n' || *str == '\r' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str)
	{
		if ('0' <= *str && *str++ <= '9')
		{
			ret = ret * 10 + *(str - 1) - '0';
			if (ret >= LONG_MAX)
				return ((int)LONG_MIN);
			if (ret <= LONG_MIN)
				return ((int)LONG_MAX);
		}
		else
			break ;
	}
	return ((int)(long)(ret * sign));
}
