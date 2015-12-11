/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 09:29:52 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/07 11:52:16 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first_elem;

	if (!(first_elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		first_elem->data = data;
		first_elem->next = *begin_list;
		*begin_list = first_elem;
	}
}
