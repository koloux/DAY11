/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 07:11:33 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/20 18:12:47 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_swap(t_list *a, t_list *b)
{
	void *tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list		*tmp;
	unsigned int	i;

	if (begin_list == NULL)
		return (NULL);
	tmp = begin_list;
	i = 0;
	while (i < nbr)
	{
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

unsigned int	ft_list_size(t_list *begin_list)
{
	t_list		*elem;
	unsigned int	count;

	elem = begin_list;
	if (elem == NULL)
		return (0);
	count = 1;
	while (elem->next != NULL)
	{
		elem = elem->next;
		count++;
	}
	return (count);
}

void		ft_list_reverse_fun(t_list *begin_list)
{
	t_list		*current;
	t_list		*to_swap;
	unsigned int	length;
	unsigned int	i;

	current = begin_list;
	length = ft_list_size(begin_list);
	i = 0;
	while (i < length)
	{
		to_swap = ft_list_at(begin_list, --length);
		ft_list_swap(current, to_swap);
		current = current->next;
		i++;
	}
}
