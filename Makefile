# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilbonnev <ilbonnev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 17:19:46 by ilbonnev          #+#    #+#              #
#    Updated: 2024/11/13 17:35:22 by ilbonnev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=	ft_printf.c								  						   \
																			   \
			libft/ft_putchar_fd.c libft/ft_putnbr_fd.c libft/ft_putstr_fd.c    \
			libft/ft_strlen.c libft/ft_countdigits.c libft/ft_puthex_fd.c 	   \
			libft/ft_putunbr_fd.c libft/ft_putptr_fd.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
			 ar rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re