/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 13:49:21 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/15 14:54:50 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_clear(t_list *list)
{
	if (list->next != NULL)
		ft_clear(list->next);
	free(list);
}

void	ft_list_clear(t_list **begin_list)
{
	ft_clear(*begin_list);
	*begin_list = NULL;
}
