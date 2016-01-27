/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 11:40:07 by gbir              #+#    #+#             */
/*   Updated: 2013/11/27 17:17:40 by gbir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*save;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_iswhispa(*s))
		++s;
	save = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!save)
		return (NULL);
	while (*s != '\0')
		save[i++] = *s++;
	save[i] = '\0';
	while ((ft_iswhispa(save[i]) || save[i] == '\0') && i >= 0)
		save[i--] = '\0';
	return (save);
}
