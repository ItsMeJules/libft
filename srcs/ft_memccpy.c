/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:03:52 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/18 16:03:55 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	ch;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	ch = (unsigned char)c;
	while (n--)
	{
		if ((*d++ = *s++) == ch)
			return (d);
	}
	return (NULL);
}
