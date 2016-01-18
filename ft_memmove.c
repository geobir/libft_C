/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:25:42 by gbir              #+#    #+#             */
/*   Updated: 2013/11/25 18:52:08 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	unsigned char	*save;
	size_t			n1;

	n1 = n;
	ss1 = (unsigned char*)malloc(n);
	save = ss1;
	ss2 = (unsigned char*)s2;
	while (n--)
	{
		*ss1++ = *ss2++;
	}
	*ss1 = '\0';
	ss1 = save;
	save = (unsigned char*)s1;
	while (n1--)
		*save++ = *ss1++;
	return (s1);
}
