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
/*
static int	s_strsplit(char const *s, char *cpy, char c)
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
*/

static int		ft_strsplitnum(char *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (s[i] != '\0')
		if (s[i++] == c && s[i] != c && s[i] != '\0')
			++n;
	return (n);
}

static char		*ft_strsplitcpy(char *s, size_t n)
{
	char *c;
	size_t	i;

	i = 0;
	if (!(c = (char*)malloc(sizeof(char) * n + 1)))
		return (0);
	while (i < n)
		c[i++] = *s++;
	c[i] = '\0';
	return (c);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**rt;
	size_t	i;
	size_t	n;
	size_t	m;
	size_t	y;

	if (!s || *s == '\0' || c == '\0')
		return (NULL);
	while (*s == c)
		++s;
	n = ft_strsplitnum((char*)s, c);
	i = 0;
	y = 0;
	m = ft_strnextc((char*)s, c);
	if (!(rt = (char**)malloc(sizeof(char*) * n)))
		return (0);
	if (!(rt[y++] = ft_strsplitcpy((char*)&s[i], m)))
		return (0);
	i += m;
	while (s[i] != '\0' && y < n)
		if (s[i++] == c && s[i] != c && s[i] != '\0')
		{
			m = ft_strnextc((char*)&s[i], c);
			if (!(rt[y++] = ft_strsplitcpy((char*)&s[i], m)))
				return (NULL);
			i += m;
		}
	return (rt);
}