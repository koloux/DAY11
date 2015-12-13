/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:23:19 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/13 12:34:23 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*elem_ref;

	elem_ref = begin_list;
	while (elem_ref->next != NULL)
	{
		if (cmp(data_ref, elem_ref->data))
			return (elem_ref);
		elem_ref = elem_ref->next;
	}
	return (begin_list);
}
