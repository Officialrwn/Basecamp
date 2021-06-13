/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:35:38 by leotran           #+#    #+#             */
/*   Updated: 2021/06/08 18:54:26 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%d\n",*((int*) list->data)); 	// (int *) is used for casting
		list = list->next;					// *((int*) list->data) = 
											// dereferences the typecasted void pointer variable
	}
}

int main()
{
	t_list *index;
	int i = 5;
	index = ft_create_elem(&i);

	print_list(index);
}