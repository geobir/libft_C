/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:23:25 by gbir              #+#    #+#             */
/*   Updated: 2013/11/25 15:22:47 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	while (n-- > 0)
	{
		*ss1++ = *ss2;
		if (*ss2++ == c)
			return ((void*)ss1);
	}
	return (0);
}
/*
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	if (n) {
		register unsigned char *tp = s1;
		register const unsigned char *fp = s2;
		do {
			if ((*tp++ = *fp++) == c)
				return (s1);
		} while (--n != 0);
	}
	return (0);
}*/
