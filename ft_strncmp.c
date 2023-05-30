/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <yushsato@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:16:17 by yushsato          #+#    #+#             */
/*   Updated: 2023/05/30 16:37:29 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1,const char *s2, unsigned int n)
{
	int	do_;

	do_ = 1;
	if (n == 0)
		return (0);
	while (n-- || do_)
	{
		do_ = 0;
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)(s2 - 1));
		if (*s1++ == 0)
			break ;
	}
	return (0);
}
