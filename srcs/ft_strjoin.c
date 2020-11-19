/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:11:17 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/19 14:20:26 by jpeyron          ###   ########.fr       */
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

static void	*ft_memalloc(size_t size)
{
	void	*buffer;

	if (!(buffer = malloc(size)))
		return (NULL);
	ft_bzero(buffer, size);
	return (buffer);
}

static char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc((size + 1) * sizeof(char)));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	if (!(new = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	new = ft_strcat(ft_strcat(new, s1), s2);
	return (new);
}