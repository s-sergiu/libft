/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:32:24 by ssergiu           #+#    #+#             */
/*   Updated: 2022/03/25 00:34:52 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(unsigned char c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}