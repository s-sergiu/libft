/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:30:23 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/20 14:36:25 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	int		i;

	s = ft_itoa(n);
	i = 0;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
	free(s);
}
