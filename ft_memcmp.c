/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:17:58 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/08 19:23:17 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *str1, const void *str2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if ((*(unsigned char*)(str1 + i)) != (*(unsigned char*)(str2 + i)))
			return (*(unsigned char*)(str1 + i) - *(unsigned char*)(str2 + i));
		i++;
	}
	return (0);
}
