/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 10:58:16 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/14 17:44:29 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin;
	int		i;

	if (ac == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&begin, av[i]);
		i++;
	}
	return (begin);
}
