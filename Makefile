# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsena <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/14 18:59:48 by nsena             #+#    #+#              #
#    Updated: 2019/09/14 19:20:24 by nsena            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_str_skip_symbols.c ft_destroy_t_stack.c ft_destroy_t_map.c ft_memdup.c ft_make_t_vector2.c ft_make_t_vector.c ft_make_t_stack2.c ft_make_t_stack.c ft_make_t_map.c ft_make_t_deque.c ft_destroy_t_vector.c ft_destroy_t_deque.c ft_make_t_deque2.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lst_add_tail.c ft_lst_elem_cpy.c ft_lstadd.c ft_lstcpy.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_putstr.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_lstdel_elem.c ft_lstdelete.c ft_realloc.c ft_print_memory.c
SRC_OBJ = ft_str_skip_symbols.o ft_destroy_t_stack.o ft_destroy_t_map.o ft_memdup.o ft_make_t_vector2.o ft_make_t_vector.o ft_make_t_stack2.o ft_make_t_stack.o ft_make_t_map.o ft_make_t_deque.o ft_destroy_t_vector.o ft_destroy_t_deque.o ft_make_t_deque2.o ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_lst_add_tail.o ft_lst_elem_cpy.o ft_lstadd.o ft_lstcpy.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putchar.o ft_putendl_fd.o ft_putendl.o ft_putnbr_fd.o ft_putnbr.o ft_putstr_fd.o ft_putstr.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o ft_toupper.o ft_lstdel_elem.o ft_lstdelete.o ft_realloc.o ft_print_memory.o

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

ft_str_skip_symbols.o: ft_str_skip_symbols.c
	$(COMPILE) ft_str_skip_symbols.c

ft_destroy_t_stack.o: ft_destroy_t_stack.c
	$(COMPILE) ft_destroy_t_stack.c

ft_destroy_t_map.o: ft_destroy_t_map.c
	$(COMPILE) ft_destroy_t_map.c

ft_memdup.o: ft_memdup.c
	$(COMPILE) ft_memdup.c

ft_make_t_deque2.o: ft_make_t_deque2.c
	$(COMPILE) ft_make_t_deque2.c

ft_destroy_t_deque.o: ft_destroy_t_deque.c
	$(COMPILE) ft_destroy_t_deque.c

ft_destroy_t_vector.o: ft_destroy_t_vector.c
	$(COMPILE) ft_destroy_t_vector.c

ft_make_t_deque.o: ft_make_t_deque.c
	$(COMPILE) ft_make_t_deque.c

ft_make_t_map.o: ft_make_t_map.c
	$(COMPILE) ft_make_t_map.c

ft_make_t_stack.o: ft_make_t_stack.c
	$(COMPILE) ft_make_t_stack.c

ft_make_t_stack2.o: ft_make_t_stack2.c
	$(COMPILE) ft_make_t_stack2.c

ft_make_t_vector.o: ft_make_t_vector.c
	$(COMPILE) ft_make_t_vector.c

ft_make_t_vector2.o: ft_make_t_vector2.c
	$(COMPILE) ft_make_t_vector2.c

ft_print_memory.o: ft_print_memory.c
	$(COMPILE) ft_print_memory.c

ft_atoi.o: ft_atoi.c
	$(COMPILE) ft_atoi.c

ft_bzero.o: ft_bzero.c
	$(COMPILE) ft_bzero.c

ft_isalnum.o: ft_isalnum.c
	$(COMPILE) ft_isalnum.c

ft_isalpha.o: ft_isalpha.c
	$(COMPILE) ft_isalpha.c

ft_isascii.o: ft_isascii.c
	$(COMPILE) ft_isascii.c

ft_isdigit.o: ft_isdigit.c
	$(COMPILE) ft_isdigit.c

ft_isprint.o: ft_isprint.c
	$(COMPILE) ft_isprint.c

ft_itoa.o: ft_itoa.c
	$(COMPILE) ft_itoa.c

ft_lst_add_tail.o: ft_lst_add_tail.c
	$(COMPILE) ft_lst_add_tail.c

ft_lst_elem_cpy.o: ft_lst_elem_cpy.c
	$(COMPILE) ft_lst_elem_cpy.c

ft_lstadd.o: ft_lstadd.c
	$(COMPILE) ft_lstadd.c

ft_lstcpy.o: ft_lstcpy.c
	$(COMPILE) ft_lstcpy.c

ft_lstdel.o: ft_lstdel.c
	$(COMPILE) ft_lstdel.c

ft_lstdelone.o: ft_lstdelone.c
	$(COMPILE) ft_lstdelone.c

ft_lstiter.o: ft_lstiter.c
	$(COMPILE) ft_lstiter.c

ft_lstmap.o: ft_lstmap.c
	$(COMPILE) ft_lstmap.c

ft_lstnew.o: ft_lstnew.c
	$(COMPILE) ft_lstnew.c

ft_memalloc.o: ft_memalloc.c
	$(COMPILE) ft_memalloc.c

ft_memccpy.o: ft_memccpy.c
	$(COMPILE) ft_memccpy.c

ft_memchr.o: ft_memchr.c
	$(COMPILE) ft_memchr.c

ft_memcmp.o: ft_memcmp.c
	$(COMPILE) ft_memcmp.c

ft_memcpy.o: ft_memcpy.c
	$(COMPILE) ft_memcpy.c

ft_memdel.o: ft_memdel.c
	$(COMPILE) ft_memdel.c

ft_memmove.o: ft_memmove.c
	$(COMPILE) ft_memmove.c

ft_memset.o: ft_memset.c
	$(COMPILE) ft_memset.c

ft_putchar_fd.o: ft_putchar_fd.c
	$(COMPILE) ft_putchar_fd.c

ft_putchar.o: ft_putchar.c
	$(COMPILE) ft_putchar.c

ft_putendl_fd.o: ft_putendl_fd.c
	$(COMPILE) ft_putendl_fd.c

ft_putendl.o: ft_putendl.c
	$(COMPILE) ft_putendl.c

ft_putnbr_fd.o: ft_putnbr_fd.c
	$(COMPILE) ft_putnbr_fd.c

ft_putnbr.o: ft_putnbr.c
	$(COMPILE) ft_putnbr.c

ft_putstr_fd.o: ft_putstr_fd.c
	$(COMPILE) ft_putstr_fd.c

ft_putstr.o: ft_putstr.c
	$(COMPILE) ft_putstr.c

ft_strcat.o: ft_strcat.c
	$(COMPILE) ft_strcat.c

ft_strchr.o: ft_strchr.c
	$(COMPILE) ft_strchr.c

ft_strclr.o: ft_strclr.c
	$(COMPILE) ft_strclr.c

ft_strcmp.o: ft_strcmp.c
	$(COMPILE) ft_strcmp.c

ft_strcpy.o: ft_strcpy.c
	$(COMPILE) ft_strcpy.c

ft_strdel.o: ft_strdel.c
	$(COMPILE) ft_strdel.c

ft_strdup.o: ft_strdup.c
	$(COMPILE) ft_strdup.c

ft_strequ.o: ft_strequ.c
	$(COMPILE) ft_strequ.c

ft_striter.o: ft_striter.c
	$(COMPILE) ft_striter.c

ft_striteri.o: ft_striteri.c
	$(COMPILE) ft_striteri.c

ft_strjoin.o: ft_strjoin.c
	$(COMPILE) ft_strjoin.c

ft_strlcat.o: ft_strlcat.c
	$(COMPILE) ft_strlcat.c

ft_strlen.o: ft_strlen.c
	$(COMPILE) ft_strlen.c

ft_strmap.o: ft_strmap.c
	$(COMPILE) ft_strmap.c

ft_strmapi.o: ft_strmapi.c
	$(COMPILE) ft_strmapi.c

ft_strncat.o: ft_strncat.c
	$(COMPILE) ft_strncat.c

ft_strncmp.o: ft_strncmp.c
	$(COMPILE) ft_strncmp.c

ft_strncpy.o: ft_strncpy.c
	$(COMPILE) ft_strncpy.c

ft_strnequ.o: ft_strnequ.c
	$(COMPILE) ft_strnequ.c

ft_strnew.o: ft_strnew.c
	$(COMPILE) ft_strnew.c

ft_strnstr.o: ft_strnstr.c
	$(COMPILE) ft_strnstr.c

ft_strrchr.o: ft_strrchr.c
	$(COMPILE) ft_strrchr.c

ft_strsplit.o: ft_strsplit.c
	$(COMPILE) ft_strsplit.c

ft_strstr.o: ft_strstr.c
	$(COMPILE) ft_strstr.c

ft_strsub.o: ft_strsub.c
	$(COMPILE) ft_strsub.c

ft_strtrim.o: ft_strtrim.c
	$(COMPILE) ft_strtrim.c

ft_tolower.o: ft_tolower.c
	$(COMPILE) ft_tolower.c

ft_toupper.o: ft_toupper.c
	$(COMPILE) ft_toupper.c

ft_lstdel_elem.o: ft_lstdel_elem.c
	$(COMPILE) ft_lstdel_elem.c

ft_lstdelete.o: ft_lstdelete.c
	$(COMPILE) ft_lstdelete.c

ft_realloc.o: ft_realloc.c
	$(COMPILE) ft_realloc.c

.PHONY: clean fclean all re update
