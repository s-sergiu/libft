/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:47:55 by ssergiu           #+#    #+#             */
/*   Updated: 2022/04/13 13:50:54 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	s;
	size_t	d;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	while (ft_strlen(dst) + 1 < dstsize && src[i] != '\0')
	{
		dst[d + i] = src[i];
		i++;
	}
	if (dstsize > d)
		dst[i + d] = '\0';
	else
		return (dstsize + s);
	return (d + s);
}
