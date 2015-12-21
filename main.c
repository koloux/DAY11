/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:11:57 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/21 13:00:57 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>

t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
void ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void ft_list_sort(t_list **begin_list, int (*cmp)());
void ft_list_reverse_fun(t_list *begin_list);
void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

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

	list = ft_create_elem(av[--ac]);
	begin = list;
	while (ac--)
	{
		list->next = ft_create_elem(av[ac]);
		list = list->next;
	}
	ft_sorted_list_insert(&begin, "", &strcmp);
	printf("reverse list fun :\n");
	while (begin)
	{
		printf("%s\n", begin->data);
		begin = begin->next;
	}
	return (0);
}
