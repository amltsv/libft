/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 16:17:43 by teevee            #+#    #+#             */
/*   Updated: 2020/05/27 18:09:26 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *ptr, int value, size_t byte);
void				ft_bzero(void *ptr, size_t byte);
void				*ft_memcpy(void *dst, const void *src, size_t byte);
void				*ft_memccpy(void *dst, const void *src, int ch, \
						size_t byte);
void				*ft_memmove(void *dst, const void *src, size_t byte);
void				*ft_memchr(const void *ptr, int ch, size_t byte);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t byte);
size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *str, int ch);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strnstr(const char *str, const char *to_find, \
						size_t size);
int					ft_strncmp(const char *str1, const char *str2, size_t size);
int					ft_atoi(const char *str);
int					ft_isalpha(int ch);
int					ft_isdigit(int ch);
int					ft_isalnum(int ch);
int					ft_isascii(int ch);
int					ft_isprint(int ch);
int					ft_toupper(int ch);
int					ft_tolower(int ch);
void				*ft_calloc(size_t num, size_t size);
char				*ft_strdup(const char *str);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void(*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), \
						void (*del)(void *));

#endif
