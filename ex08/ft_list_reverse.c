/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 15:22:48 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/14 13:56:20 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *root;
	t_list *next_root;
	t_list *new_root;

	root = *begin_list;
	new_root = NULL;
	while (root != NULL)
	{
		next_root = root->next;
		root->next = new_root;
		new_root = root;
		root = next_root;
	}
	*begin_list = new_root;
}
