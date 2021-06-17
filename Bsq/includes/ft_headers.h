/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_headers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:11:06 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 15:59:31 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADERS_H
# define FT_HEADERS_H

# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		line_size(char *str);
int		line_size2(char *str);
int		count_lines(char *str);
int		line_size_cmp(char **map, int countlines);
int		mod_map(char **map, char *marks, int countlines);

char	**str_array(char *str, int countlines);
char	*create_marks(char **str, int curr);
char	*double_size(char *data, int size);
char	**string(int argc, char **argv);
char	checkbox(char **map, int y, int x);
char	findmax(char **map, int countlines);

void	fill_map(char **map, char *marks, char maxnum, int countlines);
void	fill_box(char **map, int x, int y, int max);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	readread(char **argv, char **data, int a, int size);

#endif
