/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeyron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:56:56 by jpeyron           #+#    #+#             */
/*   Updated: 2020/11/18 20:36:16 by jpeyron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		elem = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = elem;
	}
	lst = NULL;
}
