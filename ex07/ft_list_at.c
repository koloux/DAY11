/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 14:04:32 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/13 12:31:21 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

unsigned int	ft_list_size(t_list *begin_list)
{
	t_list			*element;
	unsigned int	nbr;

	element = begin_list;
	nbr = 0;
	if (begin_list->next == NULL)
		return (nbr);
	while (element->next != NULL)
		nbr++;
	return (nbr);
}

t_list			*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *element;
	t_list *null_ptr;

	null_ptr = NULL;
	element = begin_list;
	if (nbr == 0 || begin_list == NULL)
		return (null_ptr);
	while (nbr > 0)
	{
		element = element->next;
		nbr--;
		if (element->next == NULL)
			return (null_ptr);
	}
	return (element);
}
