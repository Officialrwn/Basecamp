# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leotran <leotran@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 13:15:18 by leotran           #+#    #+#              #
#    Updated: 2021/06/16 13:33:01 by leotran          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SOURCE = ./srcs/

HEADER = ./includes/

CFILES = $(SOURCE)createmap.c $(SOURCE)createmarks.c $(SOURCE)findmax.c $(SOURCE)ft_countlines.c $(SOURCE)ft_putchar.c $(SOURCE)ft_putstr.c $(SOURCE)main.c $(SOURCE)modmap.c $(SOURCE)readread.c

OFILES = createmap.o createmarks.o findmax.o ft_countlines.o ft_putchar.o ft_putstr.o main.o modmap.o readread.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I $(HEADER) $(CFILES)
	gcc -Wall -Wextra -Werror $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: all
