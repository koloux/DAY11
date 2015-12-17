/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 05:59:23 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/17 18:00:55 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*victim;

	tmp = begin_list;
	while (tmp)
	{
		if (cmp(tmp->data, data_ref) == 0)
		{
			victim->next = tmp->next;
			free(tmp);
			tmp = victim;
		}
		else
			victim = tmp;
		tmp = tmp->next;
	}
}
