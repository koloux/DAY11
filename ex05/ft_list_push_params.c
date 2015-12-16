/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 10:58:16 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/16 11:48:19 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin;
	t_list	*list;

	if (ac <= 0)
		return (NULL);
	list = ft_create_elem(av[--ac]);
	begin = list;
	while (ac--)
	{
		list->next = ft_create_elem(av[ac]);
		list = list->next;
	}
	return (begin);
}
