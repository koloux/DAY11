/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 13:49:21 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/16 10:40:50 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*victim;

	while (*begin_list)
	{
		victim = *begin_list;
		*begin_list = (*begin_list)->next;
		free(victim);
	}
	*begin_list = NULL;
}
