/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:54:36 by leotran           #+#    #+#             */
/*   Updated: 2021/06/09 17:03:39 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tail;

	if (*begin_list)
	{
		tail = *begin_list;
		while (tail->next)
			tail = tail->next;
		tail->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
