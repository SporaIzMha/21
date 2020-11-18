/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:31:21 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/18 21:11:37 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char *s;
	
	s = (char*)str;
	while (*s)
	{
		if (*s == (char)ch)
			return (s);
		s++;
	}
	if (ch == 0)
		return (s);
	else
		return (NULL);
}
