/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:10:54 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/19 14:20:18 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
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

char	*ft_strdup(const char *s)
{
	char	*dup;

	if (!(dup = ft_strnew(ft_strlen(s))))
		return (NULL);
	return (ft_strcpy(dup, (char*)s));
}
