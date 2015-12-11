/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 07:11:33 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/10 07:16:18 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*new_root;
	t_list	*root;
	t_list	*next_root;

	root = begin_list;
	new_root = NULL;
	while (root)
	{
		new_root = root->next;
		root->next = new_root;
		new_root = root;
		root = new_root;
	}
}
