/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 14:04:32 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/15 14:02:47 by nhuber           ###   ########.fr       */
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
	if (nbr < 2)
		return (begin_list);
	if (nbr > ft_list_size(begin_list))
		return (NULL);
	while (nbr > 0)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	return (begin_list);
}
