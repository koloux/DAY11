/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 14:04:32 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/15 15:08:58 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *tmp;

	if (!*begin_list || nbr <= 0)
		return (NULL);
	tmp = begin_list;
	while (nbr > 1)
	{
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
		nbr--;
	}
	return (tmp);
}
