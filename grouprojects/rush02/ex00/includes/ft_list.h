/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 05:03:21 by leotran           #+#    #+#             */
/*   Updated: 2021/06/13 06:04:55 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h>
# include <stdlib.h>

int		count_chars(char *str);
int		count_lines(char *str);
int		check_rush_00(char *input, int x, int y);
int		check_rush_01(char *input, int x, int y);
int		check_rush_02(char *input, int x, int y);
int		check_rush_03(char *input, int x, int y);
int		check_rush_04(char *input, int x, int y);
int		ft_strcmp(char *s1, char *s2);

char	*ft_strcpy(char *dest, char *src);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);

void	print_output(int rush_number, int x, int y);
void	ft_putchar(char c);

#endif
