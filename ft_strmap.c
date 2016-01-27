/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:45:31 by gbir              #+#    #+#             */
/*   Updated: 2013/11/28 10:42:57 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*save;
	char	*ret;

	if (s && f)
	{
		save = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!save)
			return (NULL);
		ret = save;
		while (*s != '\0')
			*save++ = f(*s++);
		*save = '\0';
		return (ret);
	}
	return (NULL);
}
