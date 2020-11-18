/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:04:22 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/18 16:06:43 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cd;
	unsigned char	*cs;

	if (!src && !dest)
		return (dest);
	cd = (unsigned char *)dest;
	cs = (unsigned char *)src;
	if (cs < cd)
	{
		while (n--)
			cd[n] = cs[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
