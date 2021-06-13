/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:54:36 by leotran           #+#    #+#             */
/*   Updated: 2021/06/09 17:10:26 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

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

void    print_list(t_list *list)
{
    while (list != NULL)
    {
        printf("%d",*(int*) list->data);
        list = list->next;
    }
}

int        main(void)
{
    t_list *begin_list;

    begin_list = NULL;
    int o = 5;
    int j = 1;
    int h = 2;
    begin_list = ft_create_elem(&o);
    ft_list_push_front(&begin_list, &j);
    ft_list_push_front(&begin_list, &h);
    print_list(begin_list);
    return (0);
}