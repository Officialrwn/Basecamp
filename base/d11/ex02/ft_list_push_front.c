/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:33:08 by leotran           #+#    #+#             */
/*   Updated: 2021/06/09 17:07:18 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *head;

	if (*begin_list)
	{
		head = ft_create_elem(data);
		head->next = *begin_list;
		*begin_list = head;
	}
	else
		*begin_list = ft_create_elem(data);
}
