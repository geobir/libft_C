/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:48:25 by gbir              #+#    #+#             */
/*   Updated: 2013/11/27 19:16:33 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		s_itoa(int n, int i, char **s, int end)
{
	while (i >= end)
	{
		(*s)[i--] = ft_numabs(n % 10) + '0';
		n /= 10;
	}
}

char			*ft_itoa(int n)
{
	char	*s;
	int		i;

	i = ft_numlen(n);
	if (n < 0)
	{
		s = (char*)malloc(sizeof(char) * (i + 2));
		*s = '-';
		s[i + 1] = 0;
		s_itoa(n, i, &s, 1);
	}
	else
	{
		s = (char*)malloc(sizeof(char) * (i + 1));
		s[i] = 0;
		s_itoa(n, i - 1, &s, 0);
	}
	return (s);
}
