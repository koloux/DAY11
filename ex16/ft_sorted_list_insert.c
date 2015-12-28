/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 07:16:52 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/21 17:03:31 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*list;
	t_list	*new_elem;
	t_list	*tmp;

	list = *begin_list;
	new_elem = ft_create_elem(data);
	if (list == NULL || cmp(list->data, data) > 0)
	{
		*begin_list = new_elem;
		new_elem->next = list;
		return ;
	}
	while (cmp(list->data, data) <= 0 && list->next)
		list = list->next;
	tmp = list->next;
	list->next = new_elem;
	new_elem->next = tmp;
}
