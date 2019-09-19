/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:01:59 by nsena             #+#    #+#             */
/*   Updated: 2019/09/19 12:20:55 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/*
** map stuff.
*/
typedef struct		s_map_item
{
	void				*value;
	void				*key;
	size_t				value_size;
	size_t				key_size;
	struct s_map_item	*next_item;
}					t_map_item;

typedef struct		s_map
{
	t_map_item		*first_item;

	void			(*emplace)(struct s_map *this, t_map_item item);
	t_map_item		*(*find)(struct s_map *this, void *key, size_t key_size);
	void			(*remove)(struct s_map *this, void *key, size_t key_size);
	void			(*erase)(struct s_map *this);
}					t_map;

t_map				*ft_make_t_map(void);
void				ft_destroy_t_map(t_map *object);

/*
** deque stuff.
*/
typedef struct		s_deque_item
{
	void				*data;
	size_t				data_size;
	struct s_deque_item	*next;
}					t_deque_item;

typedef struct		s_deque
{
	struct s_deque_item	*bottom;

	void				(*push)(struct s_deque *this, void *data,
								size_t data_size);
	void				(*push_bottom)(struct s_deque *this,
										void *data, size_t data_size);
	void				(*pop)(struct s_deque *this);
	void				(*pop_bottom)(struct s_deque *this);
	t_deque_item		*(*top)(struct s_deque *this);
	size_t				(*size)(struct s_deque *this);
	void				(*erase)(struct s_deque *this);
}					t_deque;

void				ft_destroy_t_deque(t_deque *object);
t_deque				*ft_make_t_deque(void);
void				ft_make_t_deque2(t_deque *object);

/*
** stack stuff.
*/
typedef struct		s_stack_item
{
	void				*data;
	size_t				data_size;
	struct s_stack_item	*next;
}					t_stack_item;

typedef struct		s_stack
{
	struct s_stack_item	*bottom;

	void				(*push)(struct s_stack *this, void *data,
								size_t data_size);
	void				(*pop)(struct s_stack *this);
	t_stack_item		*(*top)(struct s_stack *this);
	size_t				(*size)(struct s_stack *this);
	void				(*erase)(struct s_stack *this);
}					t_stack;

t_stack				*ft_make_t_stack(void);
void				ft_make_t_stack2(t_stack *object);
void				ft_destroy_t_stack(t_stack *object);

/*
** vector stuff.
*/
typedef struct		s_vector
{
	size_t	capacity;
	size_t	last_item_index;
	size_t	data_sizeof;
	void	*data;

	void	(*push)(struct s_vector *this, void *data);
	void	(*pop)(struct s_vector *this);
	void	(*erase)(struct s_vector *this);
	void	*(*at)(struct s_vector *this, size_t index);
	size_t	(*size)(struct s_vector *this);
}					t_vector;

void				ft_make_t_vector2(t_vector *object);
t_vector			*ft_make_t_vector(size_t capacity, size_t data_sizeof);
void				ft_destroy_t_vector(t_vector *object);

/*
** Other functions.
*/
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char				*ft_str_skip_symbols(char *str, char *symbols);
void				ft_print_memory(void *mem, size_t size);
int					ft_strcmp(const char *s1, const char *s2);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, unsigned int n);
char				*ft_strdup(const char *s1);
char				*ft_strncpy(char *dest, const char *src, unsigned int n);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memdup(const void *data, size_t data_size);
char				*ft_strcpy(char *dest, const char *src);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
int					ft_isascii(int c);
char				*ft_strstr(char *str, char *to_find);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, int nb);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strchr(const char *str, int ch);
char				*ft_strnstr(const char *str, const char *to_find, size_t n);
char				*strrchr(const char *string, int symbol);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel_elem(t_list *elem);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelete(t_list *head);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lst_elem_cpy(t_list *elem);
void				ft_lst_add_tail(t_list *head, t_list *elem);
t_list				*ft_lstcpy(t_list *head);
char				*ft_itoa(int n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memmove(void *dst, void const *src, size_t len);
void				ft_puterr(char *err);
char				*ft_strrchr(const char *str, int symbol);
void				*ft_realloc(void *arr, size_t arr_size, size_t size);
#endif
