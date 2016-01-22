/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:25:42 by gbir              #+#    #+#             */
/*   Updated: 2013/11/25 18:52:08 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*cpy;
	size_t	i;

	cpy = (char*)malloc(sizeof(*cpy) * n);
	if (!cpy)
		return (NULL);
	dst = (char*)dest;
	cpy = (char*)ft_memcpy(cpy, src, n);
	i = 0;
	while (i < n)
	{
		dst[i] = cpy[i];
		i++;
	}
	return ((void*)dst);
}