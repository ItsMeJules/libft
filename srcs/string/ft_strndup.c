/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:11:55 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/18 16:27:58 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	i;

	if (!(dup = malloc((n + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < n)
		dup[i] = s[i];
	dup[i] = 0;
	return (dup);
}
