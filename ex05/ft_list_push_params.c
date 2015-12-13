/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 10:58:16 by nhuber            #+#    #+#             */
/*   Updated: 2015/12/13 12:27:36 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin;
	t_list	*tmp;
	int		i;

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
