/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 09:02:31 by nhuber            #+#    #+#             */
/*   Updated: 2015/11/05 10:20:36 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = *begin_list;
	if (!new_elem)
		new_elem = ft_create_elem(data);
	else
	{
		while (new_elem->next != 0)
			new_elem = new_elem->next;
		new_elem->next = ft_create_elem(data);
	}
}
