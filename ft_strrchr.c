/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:12:23 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/18 16:12:24 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	char	*last;

	str = (char *)s;
	i = -1;
	last = NULL;
	while (s[++i])
	{
		if (s[i] == c)
			last = &str[i];
	}
	if (c == 0)
		return (&str[i]);
	return (last);
}
