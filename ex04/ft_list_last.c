/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 10:45:40 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/07 12:09:26 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *elem;

	elem = begin_list;
	if (elem->next == NULL && elem)
		return (begin_list);
	while (elem->next != NULL)
		elem = elem->next;
	return (elem);
}
