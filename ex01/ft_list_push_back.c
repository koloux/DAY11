/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 09:02:31 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/14 17:42:01 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*tmp;

	elem = *begin_list;
	tmp = ft_create_elem(data);
	if (*begin_list == NULL)
		elem = tmp;
	else
	{
		while (elem->next)
			elem = elem->next;
		elem->next = tmp;
	}
}
