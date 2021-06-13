/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:51:00 by leotran           #+#    #+#             */
/*   Updated: 2021/06/02 17:40:26 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	argc = 0;
	while (argv[i] != '\0')
	{
		i++;
	}
	while (i > 1)
	{
		i--;
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
