/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 07:33:45 by leotran           #+#    #+#             */
/*   Updated: 2021/06/08 18:59:27 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *head;

	head = (t_list*)malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->data = data;
	head->next = NULL;
	return (head);
}


