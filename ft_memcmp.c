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
	char	*ss1;
	char	*ss2;

	ss1 = (char*)s1;
	ss2 = (char*)s2;
	while (n)
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		--n;
		++ss1;
		++ss2;
	}
	return (0);
}
