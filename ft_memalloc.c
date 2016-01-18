/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:20:14 by gbir              #+#    #+#             */
/*   Updated: 2013/11/27 13:06:52 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*s;
	char	*save;

	if (size == 0)
		return (0);
	s = (char*)malloc(sizeof(char) * size);
	if (s != NULL)
	{
		save = s;
		while (size--)
			*s++ = '\0';
		return (save);
	}
	return (0);
}
