/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:09:05 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/17 16:58:49 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *vr;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		vr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = vr;
	}
}
