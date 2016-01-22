/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:04:50 by gbir              #+#    #+#             */
/*   Updated: 2013/11/25 16:34:00 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && n)
	{
		if (*s1 == '\0')
			return (0);
		--n;
		++s1;
		++s2;
	}
	if (n == 0 || *(unsigned char *)s1 == *(unsigned char *)s2)
		return (0);
	return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -1 : +1);
}
