/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:04:12 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/18 16:04:53 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *o1;
	unsigned char *o2;

	if (dest == src || n == 0)
		return (dest);
	o1 = (unsigned char*)dest;
	o2 = (unsigned char*)src;
	while (n--)
		*o1++ = *o2++;
	return (dest);
}
