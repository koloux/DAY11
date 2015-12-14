/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 11:37:11 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/14 17:53:23 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list *elem_insert;
	t_list *elem;

	elem_insert = begin_list2;
	elem = *begin_list1;
	while (elem_insert->next == NULL)
	{
		
		
		elem_insert = elem_insert->next;
	}

}
