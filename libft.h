/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:59:33 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/08 19:45:21 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int					memcmp(const void *str1, const void *str2, size_t n);

void				*ft_memcpy(void *str, const void *src, size_t num);

void				*ft_memset(void *str, int val, size_t num);

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

#endif
