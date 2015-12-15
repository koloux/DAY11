/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 07:16:52 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/15 12:53:54 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;
	t_list	*new_elem;

	elem = *begin_list;
	if (cmp(elem->data, data) < 0)
	{
		new_elem = ft_create_elem(data);
		new_elem->next = elem->next->next;
		elem->next = new_elem;
		return ;
	}
	while (elem->next != NULL)
	{
		if (cmp(elem->data, data) <= 0)
		{
			new_elem = ft_create_elem(data);
			new_elem->next = elem->next->next;
			elem->next = new_elem;
			return ;
		}
		elem = elem->next;
	}
}
