/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 10:58:16 by nhuber            #+#    #+#             */
/*   Updated: 2015/11/05 13:45:55 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list *begin_list, void *data)
{
	t_list *first_elem;

	first_elem = (t_list *)malloc(sizeof(t_list));
	if (first_elem)
	{
		first_elem->data = data;
		first_elem->next = begin_list;
		begin_list = first_elem;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin;
	int i;

	if (ac > 1)
	{
		i = 1;
		begin = ft_create_elem(av[1]);
		while (i < ac - 1)
		{
			i++;
			ft_list_push_front(begin, av[i]);
		}
	}
	return (begin);
}
