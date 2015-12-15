/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 07:11:33 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/15 15:56:54 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*new_root;
	t_list	*root;
	t_list	*next_root;

	new_root = begin_list;
	next_root = NULL;
	while (new_root)
	{
		root = new_root->next;
		new_root->next = next_root;
		next_root = new_root;
		new_root = root;
	}
	begin_list = next_root;
}
