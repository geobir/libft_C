/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 10:44:32 by gbir              #+#    #+#             */
/*   Updated: 2013/11/27 13:32:49 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	n;

	if (s1 && s2)
	{
		n = ft_strlen(s1) + ft_strlen(s2);
		s = (char*)malloc(sizeof(char) * (n + 1));
		if (s != NULL)
		{
			*s = '\0';
			s = ft_strcat(s, s1);
			s = ft_strcat(s, s2);
			return (s);
		}
	}
	return (0);
}
