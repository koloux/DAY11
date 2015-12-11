/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 10:58:16 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/08 17:09:13 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;
	elem = (t_list *)malloc(sizeof(t_list));
	elem->data = data;
	elem->next = NULL;

	return (elem);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin;
	t_list	*tmp;
	int	i;

	i = 1;
	begin = ft_create_elem(av[0]);
	while (i < ac)
	{
		tmp = begin;
		begin = ft_create_elem(av[i]);
		begin->next = tmp;
		i++;
	}
	return (begin);
}

int main (int ac, char **av)
{
	t_list *elem;

	elem = ft_list_push_params(ac, av);
	while (elem)
	{
		printf("param : %s\n", elem->data);
		elem = elem->next;
	}
	return (0);
}
