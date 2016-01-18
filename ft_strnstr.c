/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:02:24 by gbir              #+#    #+#             */
/*   Updated: 2013/11/28 16:32:34 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*ss2;
	char	*ss1;
	char	*save;

	ss1 = (char*)s1;
	ss2 = (char*)s2;
	save = ss1;
	while (*ss1 != '\0' && n--)
	{
		if (*ss2 == *ss1)
		{
			if (ss2 == (char*)s2)
				save = ss1;
			++ss2;
		}
		else
		{
			ss2 = (char*)s2;
		}
		if (*ss2 == '\0')
			return (save);
		++ss1;
	}
	return (0);
}
