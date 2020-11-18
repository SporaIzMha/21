/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:17:40 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/06 18:16:48 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int val, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		*((unsigned char*)str + i) = (unsigned char)val;
		i++;
	}
	return (str);
}
