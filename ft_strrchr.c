/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:50:20 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/18 21:12:58 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char *s;
	char *r;
	
	s = (char*)str;
	r = NULL;
	while (*s)
	{
		if (*s == (char)ch)
			r = s;
		s++;
	}
	if (ch == 0)
		return (s);
	else
		return (r);
}
