/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yushsato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:17:35 by yushsato          #+#    #+#             */
/*   Updated: 2023/06/10 16:32:45 by yushsato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	unb;
	const char		number[] = "0123456789";

	unb = (unsigned int)n;
	if (n < 0)
	{
		write(1, "-", 1);
		unb = unb * -1;
	}
	if (unb / 10 > 0)
		ft_putnbr_fd(unb / 10, fd);
	write(fd, &number[unb % 10], 1);
}
