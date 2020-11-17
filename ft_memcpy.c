/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:24:00 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/06 18:19:47 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str, const void *src, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		*(unsigned char*)(str + i) = *(unsigned char*)(src + i);
		i++;
	}
	return (str);
}
