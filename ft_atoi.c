/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:42:51 by gbir              #+#    #+#             */
/*   Updated: 2013/11/26 16:03:44 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	save;
	size_t	sign;

	while (ft_iswhispa(*str))
		++str;
	sign = 1;
	save = 0;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	while (*str != '\0' && ft_isdigit(*str))
	{
		save *= 10;
		save += *str - '0';
		++str;
	}
	return (sign * save);
}
