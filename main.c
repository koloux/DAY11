/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:11:57 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/16 11:58:34 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>

t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = (t_list *)malloc(sizeof(t_list));
	elem->data = data;
	elem->next = NULL;
	return(elem);
}

int main(int ac, char **av)
{
	t_list	*begin;
	t_list	*list;
	t_list	*tmp;

	list = ft_create_elem(av[--ac]);
	begin = list;
	while (ac--)
	{
		list->next = ft_create_elem(av[ac]);
		list = list->next;
	}
	tmp = begin;
	printf("la liste entiere :\n");
	while (tmp)
	{
		printf("%s ", tmp->data);
		tmp = tmp->next;
	}
	tmp = begin;
	printf("\nla liste modifiee :\n");
	ft_list_remove_if(&tmp, "le", &strcmp);
	while (tmp)
	{
		printf("%s ", tmp->data);
		tmp = tmp->next;
	}
	return (0);
}
