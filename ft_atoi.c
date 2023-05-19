/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:22:43 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/19 15:33:07 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	ret;
	int	sign;

	ret = 0;
	sign = 1;
	while (*str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = -1;
		str++;
	}
	if (*str == '0')
		return (0);
	while ('0' <= *str && *str <= '9')
		ret = ret * 10 + *str - '0';
	return (ret * sign)
}
