/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:09:47 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/13 12:33:52 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list
												, void (*f)(void *)
												, void *data_ref
												, int (*cmp)())
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr->next != NULL)
	{
		if (cmp(list_ptr->data, data_ref) == 0)
			f(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
