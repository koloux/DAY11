/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 09:29:52 by nhuber            #+#    #+#             */
/*   Updated: 2015/11/05 10:18:07 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first_elem;

	first_elem = (t_list *)malloc(sizeof(t_list));
	if (first_elem)
	{
		first_elem->data = data;
		first_elem->next = *begin_list;
		*begin_list = first_elem;
	}
}
