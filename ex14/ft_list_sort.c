/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 06:22:55 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/15 12:36:53 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*elem;
	t_list	*tmp;
	t_list	*prev_elem;

	elem = *begin_list;
	if (begin_list == NULL)
		return (NULL);
	while (elem->next)
	{
		if (cmp(elem->data, elem->next->data) > 0)
		{
			tmp = elem;
			elem = elem->next;
			tmp->next = elem;
			elem = *begin_list;
		}
		else
			elem = elem->next;
	}
}
