/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:12:15 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/18 16:22:59 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	if (!to_find[0])
		return ((char*)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && i + j < len && to_find[j] &&
			str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}
