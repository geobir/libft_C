/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 13:24:44 by gbir              #+#    #+#             */
/*   Updated: 2013/11/29 14:10:41 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	s_strsplit(char const *s, char *cpy, char c)
{
	if (!s)
		return (0);
	cpy = s;
	while (*cpy == c)
		cpy++;
	if (!ft_strchr(cpy, c))
		return (0);
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**split;
	char	*cpy;
	char	*add;
	int		i;

	if (!s_strSplit(s, cpy, c))
		return (NULL);
	i = 0;
	split = NULL;
	add = ft_strnew(1);
	while (*cpy)
	{
		if (*cpy == c)
		{
			split = ft_tab_append(split, add);
			add = ft_strnew(1);
			while (*cpy == c)
				cpy++;
		}
		add = ft_strappend(add, *cpy);
		cpy++;
	}
	split = ft_tab_append(split, add);
	return (split);
}
