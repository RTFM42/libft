/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:40:52 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/18 15:40:52 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1)
		{
			*dest = src[i];
			dest++;
			i++;
		}
		*dest = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
