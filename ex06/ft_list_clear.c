/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 13:49:21 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/07 13:16:10 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*element;

	element = *begin_list;
	if (element->next == NULL)
	{
		free(element);
		return (NULL);
	}
	while (element->next != NULL)
	{
		tmp = element->next;
		free(element);
		element = tmp;
	}
}
