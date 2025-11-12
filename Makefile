# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 21:04:46 by calvares          #+#    #+#              #
#    Updated: 2025/11/11 23:57:07 by calvares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a
SOURCE =	ft_putaddress.c ft_putchar.c ft_puthexadecimal_uppercase.c \
			ft_puthexadecimal_lowercase.c ft_putnbr.c ft_putstr.c ft_putunbr.c\
			ft_printf.c
SRC =		$(SOURCE)
OBJS =		$(SRC:.c=.o)
CC =		cc
CFLAGS =	-Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME)
clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re