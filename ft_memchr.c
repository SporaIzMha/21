/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:22:23 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/17 20:01:12 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t num)
{
	size_t	i;
	
	i = 0;
	while (i < num)
	{
		if (*((unsigned char *)str + i) == (unsigned char)c)
			return ((void *)str + i;
		i++;
	}
	return (NULL);
}
