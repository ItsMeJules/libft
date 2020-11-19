/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:10:54 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/19 20:27:54 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	if (!(dup = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (s[++i])
		dup[i] = s[i];
	dup[i] = 0;
	return (dup);
}
