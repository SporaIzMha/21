/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:59:33 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/18 19:12:24 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memcpy(void *str, const void *src, size_t num);
void				*ft_memset(void *str, int val, size_t num);
int					ft_atoi(const char *str);
void				*ft_bzero(void *str, size_t num);
void				*ft_calloc(size_t num, size_t size);
int					ft_isalnum(int ch);
int					ft_isalpha(int ch);
int					ft_isalpha(int ch);
int					ft_isascii(int ch);
int	ft_isdigit(int ch);
int	ft_isprint(int ch);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int	ft_lstsize(t_list *lst);
void	*ft_memccpy(void *str, const void *src, int c, size_t num);
void	*ft_memchr(const void *str, int c, size_t num);
void	*ft_memmove(void *dst, const void *src, size_t num);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int ch);
void	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	*ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncmp(const char *str1, const char *str2, size_t num);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int ch);
int	ft_toupper(int ch);

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

#endif
