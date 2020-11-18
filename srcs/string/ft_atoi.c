/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:25:36 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/18 21:40:57 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_space(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	long	nb;
	int		i;
	int		neg;

	nb = 0;
	i = 0;
	neg = 1;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
		nb = nb * 10 + str[i++] - '0';
	return (neg * nb);
}
