/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:23:14 by gbir              #+#    #+#             */
/*   Updated: 2013/11/25 18:52:14 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;
	size_t			i;

	dst = (unsigned char*)dest;
	source = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return ((void*)dst);
}
