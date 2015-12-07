/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 09:39:14 by nhuber            #+#    #+#             */
/*   Updated: 2015/11/05 10:40:43 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*elem;
	int		count;

	elem = begin_list;
	if (elem == 0)
		return (0);
	count = 1;
	while (elem->next != 0)
	{
		elem = elem->next;
		count++;
	}
	return (count);
}
