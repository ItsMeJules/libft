/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:12:28 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/19 14:20:42 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_trimmable(char c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
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

char		*ft_strtrim(char const *s, char const *set)
{
	size_t	begin;
	size_t	end;

	if (!s || !set)
		return (NULL);
	begin = 0;
	while (s[begin] && is_trimmable(s[begin], set))
		begin++;
	end = ft_strlen(s);
	while (end != 0 && is_trimmable(s[end - 1], set))
		end--;
	if (end != 0)
		end -= begin;
	if (end <= begin)
		return (ft_strnew(0));
	return (ft_substr(s, begin, end));
}
