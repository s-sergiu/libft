/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:17:39 by ssergiu           #+#    #+#             */
/*   Updated: 2022/03/25 00:30:29 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(unsigned char s)
{
	if ((s >= 65 && s <= 90) || (s >= 97 && s <= 122) || (s >= 48 && s <= 57))
		return (1);
	else
		return (0);
}
