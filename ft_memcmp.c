/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:23:42 by gbir              #+#    #+#             */
/*   Updated: 2013/11/26 15:03:27 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	if (n == 0)
		return (0);
	ss1 = (const unsigned char*)s1;
	ss2 = (const unsigned char*)s2;
	while (42)
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		++ss1;
		++ss2;
		if (--n == 0)
			break ;
	}
	return (0);
}
