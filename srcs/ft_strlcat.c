/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:24:18 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/18 18:33:15 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dest[i])
		i++;
	if (i == size)
		return (i + ft_strlen(src));
	dest += i;
	while (src[j])
	{
		if (j < size - i - 1)
			*dest++ = src[j];
		j++;
	}
	*dest = 0;
	return (i + j);
}
