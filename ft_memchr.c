/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:23:35 by gbir              #+#    #+#             */
/*   Updated: 2013/11/28 12:13:20 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;

	str = (unsigned char*)s;
	c1 = (unsigned char)c;
	while (n-- > 0 && (*str != '\0' || c1 == '\0'))
	{
		if (*str == c1)
		{
			return ((void*)str);
		}
		++str;
	}
	return (NULL);
}
