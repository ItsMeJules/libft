/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:11:17 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/20 22:00:18 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, const char *src)
{
	int i;

	i = ft_strlen(dest);
	while (*src)
		dest[i++] = *src++;
	dest[i] = 0;
	return (dest);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	if (!(new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	ft_bzero(new, (ft_strlen(s1) + ft_strlen(s2) + 1));
	new = ft_strcat(ft_strcat(new, s1), s2);
	return (new);
}
