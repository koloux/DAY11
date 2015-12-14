/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 06:18:46 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/14 18:14:58 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list elem;

	if (*begin_list1 == NULL)
		*begin_list1 = begin_list2;
	else
	{
		elem = *begin_list1;
		while (elem)
			elem = elem->next;
		elem->next = begin_list2;
	}
}
