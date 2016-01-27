/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:30:44 by gbir              #+#    #+#             */
/*   Updated: 2013/11/27 13:08:13 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	char	*save;

	s = (char*)malloc(sizeof(char) * (++size));
	if (s != NULL)
	{
		save = s;
		while (size--)
			*s++ = '\0';
		*s = '\0';
		return (save);
	}
	return (NULL);
}
