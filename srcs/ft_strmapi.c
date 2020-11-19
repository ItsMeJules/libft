/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:11:36 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/19 20:17:27 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*new;
	int		i;

	str = (char*)s;
	if (!(new = malloc((ft_strlen(str) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (*str)
	{
		new[i] = f(i, *str++);
		i++;
	}
	return (new);
}
