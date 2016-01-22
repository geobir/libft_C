/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:55:41 by gbir              #+#    #+#             */
/*   Updated: 2013/11/24 13:29:11 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	char	c;
	char	sc;
	size_t	len;

	if ((c = *s2++) != 0)
	{
		len = ft_strlen(s2);
		while (42)
		{
			if ((sc = *s1++) == 0)
				return (NULL);
			if (sc == c && ft_strncmp(s1, s2, len) == 0)
				break ;
		}
		--s1;
	}
	return ((char *)s1);
}
