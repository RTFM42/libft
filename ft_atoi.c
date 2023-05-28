/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:22:43 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/28 22:18:39 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	overflowl(int sign, long l, char next)
{
	if (sign == 1)
		if (LONG_MAX / 10 < l
			|| (LONG_MAX / 10 == l && LONG_MAX % 10 <= next - '0'))
			return (1);
	if (sign == -1)
		if (LONG_MIN / -10 < l
			|| (LONG_MIN / -10 == l && LONG_MIN % -10 * -1 <= next - '0'))
			return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	ret;
	int		sign;

	ret = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
		{
			if (overflowl(sign, ret, *str) == 1)
				return ((int)LONG_MAX);
			if (overflowl(sign, ret, *str) == -1)
				return ((int)LONG_MIN);
			ret = ret * 10 + *str - '0';
			str++;
		}
		else
			break ;
	}
	return ((int)(ret * sign));
}
