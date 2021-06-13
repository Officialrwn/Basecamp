/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:21:30 by leotran           #+#    #+#             */
/*   Updated: 2021/06/09 12:24:19 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libheaders.h"

int	ft_argc(int argc)
{
	if (argc > 2)
	{
		ft_putstr("Too many arguements.\n");
		return (0);
	}
	else if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	return (1);
}
