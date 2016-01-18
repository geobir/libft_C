/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:50:06 by gbir              #+#    #+#             */
/*   Updated: 2013/11/25 11:49:26 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*cpy;

	len = ft_strlen(s1) + 1;
	if (!(cpy = malloc((size_t)len)))
		return (NULL);
	if (s1 < cpy)
	{
		s1 += len;
		cpy += len;
		while (len--)
			*--cpy = *--s1;
	}
	else if (s1 != cpy)
		while (len--)
			*cpy++ = *s1++;
	return (cpy);
}
