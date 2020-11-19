/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:11:36 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/19 14:20:35 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*new;
	int		i;

	str = (char*)s;
	if (!(new = ft_strnew(ft_strlen(str))))
		return (NULL);
	i = 0;
	while (*str)
	{
		new[i] = f(i, *str++);
		i++;
	}
	return (new);
}
