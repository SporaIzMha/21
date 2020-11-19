/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:40:23 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/19 03:29:51 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (size > 0)
	{
		size--;
		while (src[i] && size)
		{
			dst[i] = src[i];
			size--;
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
