/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:44:40 by gbir              #+#    #+#             */
/*   Updated: 2013/11/26 15:32:55 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	char		*s;
	size_t		save;
	size_t		sdst;

	d = dst;
	s = (char*)src;
	save = size;
	while (*d != '\0' && save-- != 0)
		++d;
	sdst = d - dst;
	save = size - sdst;
	if (save == 0)
		return (sdst + ft_strlen(src));
	while (*s != '\0')
	{
		if (save != 1)
		{
			*d = *s;
			++d;
			save--;
		}
		++s;
	}
	*d = '\0';
	return (sdst + (s - (char*)src));
}
