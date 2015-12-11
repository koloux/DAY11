/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 05:59:23 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/10 06:17:32 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*elem;

	elem = *begin_list;
	while (elem->next != NULL)
	{
		if (cmp(elem->data, data_ref))
		{
			elem->next = elem->next->next;
			free(elem);
		}
		elem = elem->next;
	}
}
