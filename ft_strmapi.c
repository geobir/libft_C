/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:03:00 by gbir              #+#    #+#             */
/*   Updated: 2013/11/28 10:43:42 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*save;
	unsigned int	i;
	unsigned int	len;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		save = (char*)malloc(sizeof(char) * (len + 1));
		if (!save)
			return (NULL);
		while (i < len)
		{
			save[i] = f(i, s[i]);
			++i;
		}
		save[i] = '\0';
		return (save);
	}
	return (NULL);
}
