/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_other.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:38:04 by gbir              #+#    #+#             */
/*   Updated: 2013/11/29 13:25:29 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Permet de placer le curseur du string en fin de chaine: '\0'
*/

void	ft_strend(char **str)
{
	while (**str != '\0')
		++(*str);
}

/*
**Permet de de garder que les N premier char d'un string
*/

void	ft_strcon(char **str, size_t n)
{
	if (ft_strlen(*str) < n)
	{
		while (n-- > 0)
			++str;
		**str = '\0';
	}
}

/*
** Permet de calculer la puissance de i (i^x)
*/

size_t	ft_puiss(size_t i, size_t x)
{
	size_t	save;

	save = 1;
	while (x-- > 0)
		save *= i;
	return (save);
}

/*
** Permet de detecter si c'est une majuscule
*/

int		ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (TRUE);
	return (FALSE);
}

/*
** Permet de detecter si c'est une minuscule
*/

int		ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (TRUE);
	return (FALSE);
}

/*
** Compare la taille des deux chaines et renvois la difference s1 - s2
*/

int		ft_strbig(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (*s1++ != 0)
		++i;
	while (*s2++ != 0)
		--i;
	return (i);
}

/*
** Renvois 1 si le chara est un espae ou un tab
*/

int		ft_iswhispa(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r')
		return (TRUE);
	return (FALSE);
}

/*
** Renvois le nombre de chiffres
*/

int		ft_numlen(int c)
{
	int		i;

	i = 0;
	while (c)
	{
		c = c / 10;
		++i;
	}
	return (i);
}

/*
** donne le deplacement a faire pour tomber sur le prochain char 'c'
*/

size_t	ft_strnextc(char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != '\0' && *s++ != c)
		++i;
	return (i);
}

/*
** retourne la valeur absolu
*/

int		ft_numabs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}
