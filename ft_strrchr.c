/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:35:38 by gbir              #+#    #+#             */
/*   Updated: 2013/11/25 12:09:47 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;
	char	*s1;

	s1 = (char*)s;
	save = 0;
	if (c == '\0')
	{
		while (*s1 != '\0')
			++s1;
		return (s1);
	}
	while (*s1 != '\0')
	{
		if (*s1 == c)
			save = s1;
		++s1;
	}
	return (save);
}