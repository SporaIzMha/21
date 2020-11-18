/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:38:42 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/18 20:17:15 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dstl;
	size_t srcl;

	i = 0;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (dstl < (size - 1) && size > 0)
	{
		while (src[i] && (dstl + 1) < (size - 1))
		{
			dst[dstl] = src[i];
			i++;
			dstl++;
		}
		dst[dstl] = '\0';
	}
	dstl = ft_strlen(dst);
	if (dstl >= size)
		dstl = size;
	return (dstl + srcl);
}
