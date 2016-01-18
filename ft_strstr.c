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

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*ss2;
	char	*ss1;
	char	*save;

	ss1 = (char*)s1;
	ss2 = (char*)s2;
	save = ss1;
	while (*ss1 != '\0')
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
