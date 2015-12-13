/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 09:39:14 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/13 12:25:31 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*elem;
	int		count;

	elem = begin_list;
	if (elem == NULL)
		return (0);
	count = 1;
	while (elem->next != NULL)
	{
		elem = elem->next;
		count++;
	}
	return (count);
}
