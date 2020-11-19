/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:38:42 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/19 13:00:05 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstl;
	size_t r;

	dstl = ft_strlen(dst);
	if (size > dstl)
		r = dstl + ft_strlen(src);
	else
		r = size + ft_strlen(src);
	if (dstl < size)
	{
		dst += dstl;
		size -= dstl;
		while (*src && (size-- > 1))
		{
			*dst = *src;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (r);
}
