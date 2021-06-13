/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 11:09:09 by leotran           #+#    #+#             */
/*   Updated: 2021/05/31 02:46:12 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	while (nb >= 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
