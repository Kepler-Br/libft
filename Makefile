# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsena <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/14 18:59:48 by nsena             #+#    #+#              #
#    Updated: 2019/09/17 16:03:48 by nsena            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_str_skip_symbols.c ft_destroy_t_stack.c ft_destroy_t_map.c ft_memdup.c ft_make_t_vector2.c ft_make_t_vector.c ft_make_t_stack2.c ft_make_t_stack.c ft_make_t_map.c ft_make_t_deque.c ft_destroy_t_vector.c ft_destroy_t_deque.c ft_make_t_deque2.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lst_add_tail.c ft_lst_elem_cpy.c ft_lstadd.c ft_lstcpy.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_putstr.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_lstdel_elem.c ft_lstdelete.c ft_realloc.c ft_print_memory.c
SRC_OBJ = $(SRC:.c=.o)

INCLUDES = libft.h
COMPILE = gcc -Wall -Wextra -Werror -c

all:$(NAME)

$(NAME): $(SRC_OBJ)
	ar rc $(NAME)  $(SRC_OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(SRC_OBJ)
	/bin/rm -f *~

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.c.o:
	$(COMPILE) $< -o $@

.PHONY: clean fclean all re update
