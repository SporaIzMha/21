/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:22:23 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/17 16:23:18 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t num)
{
	unsigned char *s;
	unsigned char cc;
	size_t i;

	s = (unsigned char *)str;
	cc = (unsigned char)c;
	i = 0;
	while (i < num)
	{
		if (*s == cc)
			return (s);
		i++;
		s++;
	}
	return (NULL);
}
