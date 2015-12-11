/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 15:22:48 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/08 17:15:42 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *next_root;
	t_list *new_root;
	t_list *root;

	root = *begin_list;
	new_root = NULL;
	while (root)
	{
		next_root = root->next;
		root->next = new_root;
		new_root = root;
		root = next_root;
	}
}
