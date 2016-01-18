/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 19:06:49 by gbir              #+#    #+#             */
/*   Updated: 2013/11/27 13:31:38 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*save;

	if (s)
	{
		str = (char*)malloc(sizeof(char) * len);
		if (str != NULL)
		{
			save = str;
			while (start--)
				++s;
			while (len--)
				*str++ = *s++;
			return (save);
		}
		return (0);
	}
	return (NULL);
}
