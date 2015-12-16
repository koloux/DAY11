/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 07:11:33 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/16 16:11:40 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*root;
	t_list	*next_root;
	t_list	*list;

	root = NULL;
	list = begin_list;
	while (list)
	{
		next_root = list->next;
		list->next = root;
		root = list;
		list = next_root;
	}
	begin_list = list;
}
