/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 06:22:55 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/13 10:52:50 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*elem;
	t_list	*tmp;
	t_list	*prev_elem;

	elem = *begin_list;
	if (elem == NULL)
		return (NULL);
	while (elem->next != NULL)
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

int main(int ac, char **av)
{
	
}
