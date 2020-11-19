/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:15:26 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/19 03:26:48 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *e;

	if (!(e = (t_list*)malloc(sizeof(e))))
		return (NULL);
	e->content = content;
	e->next = NULL;
	return (e);
}
